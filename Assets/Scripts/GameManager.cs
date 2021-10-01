using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
//ゲームの状態を管理するクラス
public class GameManager : MonoBehaviour
{
    [SerializeField]
    Text gameStateText;
    public void GameOver()
    {
        gameStateText.text = "ゲームオーバー";
    }
}
