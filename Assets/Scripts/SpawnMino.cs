using UnityEngine;
using System.Collections.Generic;

//minoを生成するクラス
public class SpawnMino : MonoBehaviour
{
    [SerializeField]
    GameObject[] Minos;//7種類のminoを格納
    [SerializeField]
    Vector3 nextMinoPosi;//次のミノの待機場所
    Dictionary<int,Vector3> nextPosition = new Dictionary<int, Vector3>()
    {
        {0, new Vector3(0.4f,22f,0f)},
        {1, new Vector3(0.2f,20.3f,0f)},
        {2, new Vector3(0.1f,21f,0f)},
        {3, new Vector3(0.5f,22f,0f)},
        {4, new Vector3(0.8f,22f,0f)},
    };

    void Start()
    {
        FirstMino();
        NextMinoCreate();
    }

    void FirstMino()
    {
      GameObject firstMino =  Instantiate(Minos[Random.Range(0, Minos.Length)], transform.position, Quaternion.identity);
        firstMino.GetComponent<Mino>().HoldFlag = true;
    }

    public void NextMinoCreate()
    {
        int minoNum = Random.Range(0, Minos.Length);//次のミノのインデックスを取得

        GameObject nextObj = Instantiate(Minos[minoNum],nextPosition[minoNum],Quaternion.identity);

        nextObj.GetComponent<Mino>().enabled = false;
        nextObj.GetComponent<Mino>().NextFlag = true;
    }
}
