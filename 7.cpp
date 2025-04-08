// 標準出力にて2つの整数を入力する
// 足し算、引き算、掛け算、割り算を選択し、結果を標準出力する
// 選択画面の例
// 足し算：0 引き算：1 掛け算：2 割り算：3

#include <stdio.h>

int main() {
    int num1, num2;
    int choice;

    printf("2つの整数を入力してください: ");
    scanf("%d %d", &num1, &num2);

    printf("足し算：0 引き算：1 掛け算：2 割り算：3\n");
    printf("選択してください: ");
    scanf("%d", &choice);

    switch (choice) {
        case 0:
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 1:
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 2:
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 3:
            if (num2 == 0) {
                printf("0で割ることはできません\n");
            } else {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            }
            break;
        default:
            printf("無効な選択です\n");
            break;
    }

    getchar();
    getchar();
    return 0;
}
