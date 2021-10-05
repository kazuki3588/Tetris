using UnityEngine;

//Hold機能を実装するクラス
class Hold : MonoBehaviour
{
    GameObject[] currentMinos;//現在存在しているミノをすべて格納
    GameObject[] holdMinos;//ミノ配列からholdされているものを探す
    Vector3 middlePosition;//途中の位置を格納
    Quaternion escapeQuaternion;//ミノを戻し、角度を戻す時に使う
    bool firstClick;//最初にクリックしたかを判定
    bool overHang = false;//はみ出し判定
    public void Update()
    {
        if (!overHang) return;
        holdMinos = GameObject.FindGameObjectsWithTag("Mino");
        foreach(var holmino in holdMinos)
        {
            if (holmino.GetComponent<Mino>().OverMinoFlag == false && holmino.GetComponent<Mino>().HoldFlag == true)//オーバーしたミノ以外かつhold可能(つまり、ネクストミノと、下にいる動けないミノを除外)なミノを取り出す処理
            {
                holmino.transform.position = middlePosition;//クリックした時の場所かつ動いている時のミノ位置移動
                holmino.transform.localRotation = escapeQuaternion;//クリックした時の場所かつ動いている時のミノ角度に変更(エラーになる例、動いているミノがデフォルトの角度だとエラーになる位置にいて、なおかつholdミノ変えた時エラーが出るパターン）
                holmino.GetComponent<Mino>().enabled = true;
            }
        }
        overHang = false;
    }
    public void PushHoldButton()
    {
        currentMinos = GameObject.FindGameObjectsWithTag("Mino");
        foreach(var activeMino in currentMinos)
        {
            if(activeMino.GetComponent<Mino>().enabled == true)
            {
                middlePosition = activeMino.transform.position;//事前にポジション取得
            }
        }
        foreach(var _ctMino in currentMinos)
        {
            if (_ctMino.GetComponent<Mino>().enabled == true)
            {
                _ctMino.GetComponent<Mino>().enabled = false;

                escapeQuaternion = _ctMino.transform.localRotation;//現在の角度を逃がす
                _ctMino.transform.localRotation = Quaternion.Euler(0, 0, 0);//デフォルトの角度にする

                switch (_ctMino.name)
                {
                    case "Convexmino(Clone)":
                        _ctMino.transform.position = new Vector3(9.1f, 22f, 0);
                        break;
                    case "Imino(Clone)":
                        _ctMino.transform.position = new Vector3(9.2f, 20.3f, 0);
                        break;
                    case "Lmino(Clone)":
                        _ctMino.transform.position = new Vector3(9.1f, 21f, 0);
                        break;
                    case "Smino(Clone)":
                        _ctMino.transform.position = new Vector3(9.09f, 22f, 0);
                        break;
                    case "Squaremino(Clone)":
                        _ctMino.transform.position = new Vector3(9.7f, 22f, 0);
                        break;
                }
                
            }
            else if (_ctMino.GetComponent<Mino>().enabled == false && _ctMino.GetComponent<Mino>().NextFlag == false && _ctMino.GetComponent<Mino>().HoldFlag == true)
            {
                var holdCurrentPosi = _ctMino.transform.position;//holdの位置を逃がしておく
                _ctMino.transform.position = middlePosition;//クリックした時かつ動いている時のミノ位置を移動
                _ctMino.GetComponent<Mino>().enabled = true;
                if (!_ctMino.GetComponent<Mino>().ValidMouvement())//ミノを交換して、はみ出た場合の処理
                {
                    overHang = true;//処理を１回に限定するため。
                    _ctMino.GetComponent<Mino>().OverMinoFlag = true;//オーバしたやつを除外するため。
                    _ctMino.transform.position = holdCurrentPosi;//holdの場所に戻す
                    _ctMino.transform.localRotation = Quaternion.Euler(0, 0, 0);//念の為角度もデフォルトに戻しておく
                    _ctMino.GetComponent<Mino>().enabled = false;
                }
            }
            else if (_ctMino.GetComponent<Mino>().NextFlag == true && !firstClick)
            {
                firstClick = true;
                _ctMino.GetComponent<Mino>().transform.position = middlePosition;
                _ctMino.GetComponent<Mino>().enabled = true;
                _ctMino.GetComponent<Mino>().NextFlag = false;
                _ctMino.GetComponent<Mino>().HoldFlag = true;
                FindObjectOfType<SpawnMino>().NextMinoCreate();
            }
        }
    }
}
