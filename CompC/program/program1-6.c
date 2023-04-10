/* 第1回　課題1-6 */

/* K1-6 */
// 問6
// 総合問題
//    下に示すように，入力した文字列を，全て大文字，全て小文字に変換する
//    プログラムを作成しなさい。

/* Ex1-6 */
// 文字列を入力してください:oZakI↲
// 大文字:OZAKI
// 小文字:ozaki


/*【ソースコード】*/
#include <stdio.h>
int main(void)
{
    int i;
    char str[256], big[256], small[256];

    printf("文字列を入力してください: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            big[i] = str[i] - ('a' - 'A');
        }
        else
        {
            big[i] = str[i];
        }
    }
    big[i] = '\0';

    printf("大文字: %s\n", big);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            small[i] = str[i] - ('A' - 'a');
        }
        else
        {
            small[i] = str[i];
        }
    }
    small[i] = '\0';

    printf("小文字: %s\n", small);

    return 0;
}
