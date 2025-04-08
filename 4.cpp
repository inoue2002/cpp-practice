// 標準入力で5つの整数を入力すると、値が大きい順に表示される
// 実行例： 整数を入力してください：1 2 3 4 5
// 5 4 3 2 1

#include <stdio.h>

int main() {
    int num[5];
    int i, j, temp;

    // 一度に5つの整数を入力
    printf("整数を入力してください：");
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

    // バブルソート
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (num[j] < num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    // ソート後の整数を表示 
    printf("ソート後の整数：");
    for (i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    
    return 0;
}