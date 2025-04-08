// 標準入力にてアルファベットを入力すると、小文字は大文字に、大文字は小文字に変換されたものが表示される
// 実行例： 整数を入力してください：a
// A

#include <stdio.h>

int main() {
    char str[256];
    int i;
    scanf("%s", str);
    
    // 文字変換
    // アスキーコードをいじる
    // https://qiita.com/sy1/items/efc2908755268a03a376
    // https://www3.nit.ac.jp/~tamura/ex2/ascii.html
    // 小文字は32減らせば大文字になり
    // 大文字は32増やせば小文字になる
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    // 変換後の文字を表示
    printf("%s\n", str);

    return 0;
}