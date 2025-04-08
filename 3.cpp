// 標準入力で整数を入力すると、0からその数字までカウントアップして標準出力する
// 実行例： 整数を入力してください：5
// 0 1 2 3 4 5

#include <stdio.h>

int main() {
    int num;
    
    printf("整数を入力してください：");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++) {
        printf("%d ", i);
    }
    return 0;
}