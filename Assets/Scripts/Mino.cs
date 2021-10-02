using UnityEngine;
using UnityEngine.EventSystems;

//テトリミノを管理するクラス
class Mino : MonoBehaviour,IPointerDownHandler,IPointerUpHandler,IPointerClickHandler
{
    const int allowableToerance = 3;
    float previousTime;//経過時間s
    float fallTime = 1f;//minoが落ちる時間
    bool isPushed = false;//マウス検知用変数
    bool maxMino = false;
    Vector3 touchPosition;//minoにタッチした時のポシション
    Vector3 rotationPoint;//minoの回転
    Vector3 spawnPositon = new Vector3(5f, 19f, 0f);
    static int width = 10;//ステージの横幅
    static int height = 20;//ステージの縦幅
    static Transform[,] grid = new Transform[width, height + allowableToerance];//ミノを積み上げるためのグリッド２次元配列
    GameObject[] nextMinos;//現在存在するミノを格納するための変数

    public bool NextFlag { get; set; }
    public bool HoldFlag { get; set; }
    void Update()
    {
        Vector3 nowPosition;//現在のマウスポジション
        Vector3 diffposition;//差分を格納する変数

        bottomMove();

        if (!isPushed) return;
        nowPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        diffposition = nowPosition - touchPosition;

        diffposition.y = 0;
        diffposition.z = 0;

        RightMouve(diffposition);
        LeftMove(diffposition);

        touchPosition = nowPosition;//処理が終わった後差分を０にするため
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        isPushed = true;
        touchPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        isPushed = false;
        touchPosition = Vector3.zero;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        transform.RotateAround(transform.TransformPoint(rotationPoint), new Vector3(0, 0, 1), -90);
        if (ValidMouvement()) return;
        transform.RotateAround(transform.TransformPoint(rotationPoint), new Vector3(0, 0, 1), 90);
    }

    bool ValidMouvement()
    {
        foreach (Transform children in transform)
        {
            int roundX = Mathf.RoundToInt(children.transform.position.x);
            int roundY = Mathf.RoundToInt(children.transform.position.y);

            if (roundX < 0 || roundX >= width || roundY < 0 || roundY >= height + 3)
            {
                return false;
            }
            else if(grid[roundX,roundY] != null)//グリッドに登録されていたら、falseを返す;
            {
                return false;
            }
        }
        return true;
    }

    void RightMouve(Vector3 diffposi)
    {
        if(diffposi.x > 0)
        {
            transform.position += new Vector3(1, 0, 0);
        }
        if (ValidMouvement()) return;
        transform.position -= new Vector3(1, 0, 0);
    }

    void LeftMove(Vector3 diffposi)
    {
        if(diffposi.x < 0)
        {
            transform.position += new Vector3(-1, 0, 0);
        }
        if (ValidMouvement()) return;
        transform.position -= new Vector3(-1, 0, 0);
    }

    void bottomMove()
    {
        if(Input.GetKeyDown(KeyCode.DownArrow) || Time.time - previousTime >= fallTime)
        {
            transform.position += new Vector3(0, -1, 0);
            if (!ValidMouvement())
            {
                transform.position -= new Vector3(0, -1, 0);
                enabled = false;
                NextFlag = false;
                HoldFlag = false;
                AddToGrid();//動けない状態になったらすぐグリッドに登録
                CheckLines();
                nextMinos = GameObject.FindGameObjectsWithTag("Mino");
                foreach (var nxMino in nextMinos)
                {
                    if (nxMino.GetComponent<Mino>().NextFlag == true && !maxMino)
                    {
                        nxMino.transform.position = spawnPositon;//nextMinoの待機場所を変更
                        nxMino.GetComponent<Mino>().NextFlag = false;
                        nxMino.GetComponent<Mino>().HoldFlag = true;//Hold可能にする
                        nxMino.GetComponent<Mino>().enabled = true;//Minoを動かせる状態にする
                        FindObjectOfType<SpawnMino>().NextMinoCreate();
                    }
                }
            }
            previousTime = Time.time;
        }
    }

    void AddToGrid()
    {
        foreach(Transform children in transform)
        {
            int roundX = Mathf.RoundToInt(children.transform.position.x);//minoブロックの子オブジェクトのx座標を取得
            int roundY = Mathf.RoundToInt(children.transform.position.y);//minoブロックの子オブジェクトのy座標を取得
            grid[roundX, roundY] = children;//minoブロックの子オブジェクトをグリッド配列に一つ一つ登録

            if(roundY >= height - 1)
            {
                maxMino = true; 
                FindObjectOfType<GameManager>().GameOver();
            }
        }
    }

    void CheckLines()
    {
        for(int i = height -1; i >= 0; i--)//0から19段のラインを確認(縦)
        {
            if (HasLine(i))
            {
                DeleteLine(i);
                RowDown(i);
            }
        }
    }

    bool HasLine(int i)
    {
        for(int j = 0; j < width; j++)//0から10段のラインを確認(横）
        {
            if (grid[j, i] == null) return false;
        }
        return true;
    }

    void DeleteLine(int i)
    {
        FindObjectOfType<GameManager>().AddScore();
        for(int j = 0; j <　width; j++)
        {
            Destroy(grid[j, i].gameObject);
            grid[j, i] = null;
        }
    }

    void RowDown(int i)
    {
        for(int y = i; y < height; y++)//消された行から最大行まで調べる
        {
            for(int j = 0; j < width; j++)//横の列すべて調べる
            {
                if(grid[j,y] != null)//参照されていれば
                {
                    grid[j, y - 1] = grid[j, y];//参照を１行下げる
                    grid[j, y] = null;
                    grid[j, y - 1].transform.position -= new Vector3(0, 1, 0);//ミノを一段下げる
                }
            }
        }
    }
}
