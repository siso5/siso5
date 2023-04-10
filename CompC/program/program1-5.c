/* 第1回　課題1-5 */

/* K1-5 */
// 問5
// 関数
// 1.二つのint型整数のうち，小さい方の値を返す関数min2を作成しなさい。
// 2.min2を利用して，入力した二つの整数値の小さい方を表示しなさい。

/* Ex1-5 */
// 二つの整数を入力してください。
//  整数1: 83↲
//  整数2: 45↲
//  小さい方の値は45です。


/*【ソースコード】*/
#include <stdio.h>
int main(void)
{
     int min1, min2;

     printf("二つの整数を入力してください。\n");
     printf("整数1: ");
     scanf("%d", &min1);
     printf("整数2: ");
     scanf("%d", &min2);

    if(min1<min2){
        printf("小さい方の値は%dです。\n", min1);
     }

     if(min1>min2){
        printf("小さい方の値は%dです。\n", min2);
     }

     if(min1 == min2){
        printf("小さい方の値とかなく同値です。\n");
     }

     return 0;
}
