using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Hold機能を実装するクラス
class Hold : MonoBehaviour
{
    GameObject[] currentMinos;//現在存在しているミノをすべて格納
    Vector3 holdPosition = new Vector3(12f,9.7f,0);
    Vector3 middlePosition;//途中の位置を格納
    bool firstClick;

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
                _ctMino.transform.position = middlePosition;
                _ctMino.GetComponent<Mino>().enabled = true;
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
