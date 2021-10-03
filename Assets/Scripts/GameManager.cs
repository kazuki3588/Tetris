using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

//ゲームの状態を管理するクラス
public class GameManager : MonoBehaviour
{
    [SerializeField]
    Text gameStateText;//ゲームオーバーを表示するテキスト
    [SerializeField]
    Text socreText;//スコアを表示するテキスト

    int score;//スコアを格納する変数

    void Start()
    {
        score = 0;//スコアの初期化
    }

    public void AddScore(int deleteCount)
    {
        switch (deleteCount)
        {
            case 0:
                break;
            case 1:
                score += 100;
                break;
            case 2:
                score += 200;
                break;
            case 3:
                score += 400;
                break;
            case 4:
                score += 600;
                break;
        }
        socreText.text = score.ToString();
    }

    public void GameOver()
    {
        gameStateText.text = "ゲームオーバー";
        StartCoroutine("ReStart");
    }

    IEnumerator ReStart()
    {
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
