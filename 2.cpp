// 標準入力にて最大10文字までの文字を読み込み、標準出力する。全角文字は考慮しないものとする。なお11文字以上であれば入力エラー！と表示させる

// 実行するには g++ 2.cpp -o 2
// 実行するには ./2
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int count = 0;

    printf("文字を入力してください: ");

    // 安全な文字列入力
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("入力エラー！\n");
        return 1;
    }

    // 改行文字を削除
    str[strcspn(str, "\n")] = '\0';

    // 文字カウント
    count = strlen(str);

    // 文字数が11文字以上であれば入力エラー！と表示させる
    if (count > 10) {
        printf("入力エラー！\n");
    } else {
        printf("%s\n", str);
    }
    return 0;
}