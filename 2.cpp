// 標準入力にて最大10文字までの文字を読み込み、標準出力する。全角文字は考慮しないものとする。なお11文字以上であれば入力エラー！と表示させる

// 実行するには g++ 2.cpp -o 2
// 実行するには ./2
#include <stdio.h>

int main() {
    char str[256];
    int count = 0;

    // 文字入力
    scanf("%s", str);

    // 文字カウント
    while (str[count] != '\0') {
        count++;
    }

    // 文字数が11文字以上であれば入力エラー！と表示させる
    if (count > 10) {
        printf("入力エラー！\n");
    } else {
        printf("%s\n", str);
    }
}