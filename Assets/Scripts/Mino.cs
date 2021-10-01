using UnityEngine;
using UnityEngine.EventSystems;
//テトリミノを管理するクラス
class Mino : MonoBehaviour,IPointerDownHandler,IPointerUpHandler,IPointerClickHandler
{
    float previousTime;
    float fallTime = 1f;//minoが落ちる時間
    bool isPushed = false;//マウス検知用変数
    Vector3 touchPosition;//minoにタッチした時のポシション
    Vector3 rotationPoint;//minoの回転
    static int width = 10;//ステージの横幅
    static int height = 20;//ステージの縦幅

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

            if (roundX < 0 || roundX >= width || roundY < 0 || roundY >= height)
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
            }

            previousTime = Time.time;
        }
    } 
}
