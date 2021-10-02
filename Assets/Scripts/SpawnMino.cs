using UnityEngine;

//minoを生成するクラス
public class SpawnMino : MonoBehaviour
{
    [SerializeField]
    GameObject[] Minos;//7種類のminoを格納
    [SerializeField]
    Vector3 nextMinoPosi;//次のミノの待機場所
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
        GameObject nextObj = Instantiate(Minos[Random.Range(0, Minos.Length)],nextMinoPosi,Quaternion.identity);
        nextObj.GetComponent<Mino>().enabled = false;
        nextObj.GetComponent<Mino>().NextFlag = true;
    }
}
