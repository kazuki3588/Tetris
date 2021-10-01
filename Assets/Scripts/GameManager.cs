using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

//ゲームの状態を管理するクラス
public class GameManager : MonoBehaviour
{
    [SerializeField]
    Text gameStateText;
    [SerializeField]
    Text socreText;

    int score;

    void Start()
    {
        score = 0;//スコアの初期化
    }

    public void AddScore()
    {
        score += 100;
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
