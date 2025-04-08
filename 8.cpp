// じゃんけんができるプログラムを、rand関数を用いて作成する
// ただし、グー、チョキ、パーは確率を1/3ずつにする
// 0,1,2以外の入力の時は終了コマンドとする

// 実行例
// グー:0 チョキ:1 パー:2 END:3
// じゃーんけーん・・・
// 何を出す？ : 1 
// 自分：チョキ　相手：チョキ
// あーいこーで・・・
// 何を出す？ : 2
// 自分：パー　相手：パー
// あーいこーで・・・
// 何を出す？ : 0
// 自分：グー　相手：チョキ
// あなたの勝ちです！
// 何を出す？ : 3
// あなたは終了しました。

// rand: https://learn.microsoft.com/ja-jp/cpp/c-runtime-library/reference/rand?view=msvc-170
// rand:https://ninjacode.work/magazine/programming/%E3%80%90c%E8%A8%80%E8%AA%9E%E5%85%A5%E9%96%80%E3%80%91%E4%B9%B1%E6%95%B0%E3%81%AE%E7%94%9F%E6%88%90%E3%81%A8%E4%BD%BF%E3%81%84%E6%96%B9/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    int computer_choice;
    int result;

    // 数字と手札の対応
    const char *choices[] = {"グー", "チョキ", "パー"};
    
    // 乱数の初期化
    srand((unsigned int)time(NULL));

    printf("グー:0 チョキ:1 パー:2 END:3\n");
    printf("じゃーんけーん・・・\n");
    while (1) {
        printf("何を出す？ : ");
        scanf("%d", &choice);

        // 終了コマンドは0,1,2以外は終了コマンドとする
        if (choice != 0 && choice != 1 && choice != 2) {
            printf("あなたは終了しました。\n");
            break;
        }

        // 相手の出す手をランダムに選択
        // 生成した乱数を3で割った余りをcomputer_choiceに格納
        computer_choice = rand() % 3;

        // 結果を表示
        printf("自分：%s 相手：%s\n", choices[choice], choices[computer_choice]);

        // 勝敗を判定
        if (choice == computer_choice) {
            printf("あーいこーで・・・\n");
            // ユーザーが勝つ場合の条件
            // ユーザーがグー(0)を出して、相手がチョキ(1)を出した場合
            // ユーザーがチョキ(1)を出して、相手がパー(2)を出した場合
            // ユーザーがパー(2)を出して、相手がグー(0)を出した場合
        } else if ((choice == 0 && computer_choice == 1) ||
                   (choice == 1 && computer_choice == 2) ||
                   (choice == 2 && computer_choice == 0)) {
            printf("あなたの勝ちです！\n");
        } else {
            printf("あなたの負けです！\n");
        }
    }

    return 0;
}
