using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Hold機能を実装するクラス
class Hold : MonoBehaviour
{
    GameObject[] currentMinos;//現在存在しているミノをすべて格納
    Vector3 holdPosition = new Vector3(12f,9.7f,0);
    bool firstClick;

    public void PushHoldButton()
    {
        currentMinos = GameObject.FindGameObjectsWithTag("Mino");
        foreach(var _ctMino in currentMinos)
        {
            if (_ctMino.GetComponent<Mino>().enabled == true)
            {
                _ctMino.GetComponent<Mino>().enabled = false;
                _ctMino.transform.position = holdPosition;
            }
            else if (_ctMino.GetComponent<Mino>().enabled == false && _ctMino.GetComponent<Mino>().NextFlag == false && _ctMino.GetComponent<Mino>().HoldFlag == true)
            {
                _ctMino.transform.position = new Vector3(5f, 19f, 0f);
                _ctMino.GetComponent<Mino>().enabled = true;
            }
            else if (_ctMino.GetComponent<Mino>().NextFlag == true && !firstClick)
            {
                firstClick = true;
                _ctMino.GetComponent<Mino>().transform.position = new Vector3(5f, 19f, 0);
                _ctMino.GetComponent<Mino>().enabled = true;
                _ctMino.GetComponent<Mino>().NextFlag = false;
                _ctMino.GetComponent<Mino>().HoldFlag = true;
                FindObjectOfType<SpawnMino>().NextMinoCreate();
            }
        }
    }
}
