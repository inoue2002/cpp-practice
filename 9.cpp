/*
氏名及び国語、算数、英語の点数をメンバとする構造体studentを宣言し
標準入力から3名分の氏名及び国語、算数、英語の点数を取得せよ
要素数4の構造体配列を使用すること
そして、各教科の平均点、及び各教科のTOP TOPの成績と氏名を標準出力する
*/

#include <stdio.h>

struct student {
    char name[20];
    int kokugo;
    int sansu;
    int eigo;
};

int main() {
    // 4つ作るのはバッファ（？）
    struct student students[4];
    int i;
    int total_kokugo = 0;
    int total_sansu = 0;
    int total_eigo = 0;

    // max点を格納する変数
    int max_kokugo = 0;
    int max_sansu = 0;
    int max_eigo = 0;

    // 3名分の氏名及び国語、算数、英語の点数を取得
    for (i = 0; i < 3; i++) {
        printf("%d人目の名前: ", i + 1);
        scanf("%s", students[i].name);
        printf("%d人目の国語の点数: ", i + 1);
        scanf("%d", &students[i].kokugo);
        printf("%d人目の算数の点数: ", i + 1);
        scanf("%d", &students[i].sansu);
        printf("%d人目の英語の点数: ", i + 1);
        scanf("%d", &students[i].eigo);

        // 各教科の合計点を計算
        total_kokugo += students[i].kokugo;
        total_sansu += students[i].sansu;
        total_eigo += students[i].eigo;

        // 各教科の最高点を更新
        if (students[i].kokugo > max_kokugo) {
            max_kokugo = students[i].kokugo;
        }
        if (students[i].sansu > max_sansu) {
            max_sansu = students[i].sansu;
        }
        if (students[i].eigo > max_eigo) {
            max_eigo = students[i].eigo;
        }
    }

    // 各教科の平均点を計算
    double avg_kokugo = (double)total_kokugo / 3;
    double avg_sansu = (double)total_sansu / 3;
    double avg_eigo = (double)total_eigo / 3;

    // 平均点の表示
    printf("国語の平均点: %.2f点\n", avg_kokugo);
    printf("算数の平均点: %.2f点\n", avg_sansu);
    printf("英語の平均点: %.2f点\n", avg_eigo);

    // 各教科の最高点の成績と氏名を標準出力
    // 同点だった場合、どちらの成績も表示する
    for (i = 0; i < 3; i++) {
        if (students[i].kokugo == max_kokugo) {
            printf("国語の最高点: %d点, 最高点の成績: %s\n", max_kokugo, students[i].name);
        }
        if (students[i].sansu == max_sansu) {
            printf("算数の最高点: %d点, 最高点の成績: %s\n", max_sansu, students[i].name);
        }
        if (students[i].eigo == max_eigo) {
            printf("英語の最高点: %d点, 最高点の成績: %s\n", max_eigo, students[i].name);
        }
    }

    getchar();  // ウィンドウが自動で閉じないようにする
    return 0;
}
