// 自分でDebug内に"test1"を作成し、その内容を読み込む
// 読み込んだ内容を標準出力した後、"test2"という名のテクストファイルとして保存するプログラムを作る

#include <stdio.h>

int main() {
    FILE *fp1;  // 読み込み用
    FILE *fp2;  // 書き込み用
    char str[256];

    // test1を開く（読み込みモード）
    fp1 = fopen("test1", "r");
    if (fp1 == NULL) {
        printf("test1を開けませんでした\n");
        return 1;
    }

    // test2を開く（書き込みモード）
    fp2 = fopen("test2", "w");
    if (fp2 == NULL) {
        printf("test2を作れませんでした\n");
        fclose(fp1);
        return 1;
    }

    // 1行ずつ読み込んで表示と保存を同時に行う
    // fgets:https://learn.microsoft.com/ja-jp/cpp/c-runtime-library/reference/fgets-fgetws?view=msvc-170
    while (fgets(str, 256, fp1) != NULL) {
        printf("%s", str);
        fprintf(fp2, "%s", str);
    }

    // ファイルを閉じる
    fclose(fp1);
    fclose(fp2);
    
    return 0;
}