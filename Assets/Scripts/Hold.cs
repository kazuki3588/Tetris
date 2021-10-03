using UnityEngine;

//Hold機能を実装するクラス
class Hold : MonoBehaviour
{
    GameObject[] currentMinos;//現在存在しているミノをすべて格納
    GameObject[] holdMinos;//ミノ配列からholdされているものを探す
   [SerializeField]
    Vector3 holdPosition;//holdの位置
    Vector3 middlePosition;//途中の位置を格納
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
                _ctMino.transform.position = holdPosition;
            }
            else if (_ctMino.GetComponent<Mino>().enabled == false && _ctMino.GetComponent<Mino>().NextFlag == false && _ctMino.GetComponent<Mino>().HoldFlag == true)
            {
                var currentPosi = _ctMino.transform.position;//holdの位置を逃がしておく
                _ctMino.transform.position = middlePosition;//クリックした時かつ動いている時のミノ位置を移動
                _ctMino.GetComponent<Mino>().enabled = true;
                if (!_ctMino.GetComponent<Mino>().ValidMouvement())//ミノを交換して、はみ出た場合の処理
                {
                    overHang = true;//処理を１回に限定するため。
                    _ctMino.GetComponent<Mino>().OverMinoFlag = true;//オーバしたやつを除外するため。
                    _ctMino.transform.position = currentPosi;//holdの場所に戻す
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
