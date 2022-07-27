/* 第6回　課題2-k2-2 */

/* K2-2 */
// （2 点） 要素数 7 の int 型配列 data を宣言し，以下のデータを初期化子として初期化
// しなさい。
// 配列の長さ（７）を設定するためにマクロを使用しなさい。次に，このデータの中から
//     a. 平均値
//     b. 最大値を見つけ，最大値とその添字番号
//     c. 最小値を見つけ，最小値とその添字番号
//     d. ユーザーにより入力された整数と一番距離が近い要素とその添字番号を出力するプログラムを作成しなさい。
// なお、平均値を四捨五入によって小数点以下第 2 位まで求めなさい。

// データ：9, -11, 23, 99, 43, -55, 5


/*【実行例】*/
// t21j000@pc00:~/kisopro2/exercise$ ./k22<ENTER>
// データ：9, -11, 23, 99, 43, -55, 5
// 平均値：16.14
// 最大値：99, 最大値の添字番号：3
// 最小値：-55, 最小値の添字番号：5
// 検索したい数値：13 <ENTER>
// 入力された値 13 から一番距離が近い要素は 1 番目の 9 です。
// t21j000@pc00:~/kisopro2/exercise$■



/*【ソースコード】*/
#include <stdio.h>
#define data 7
int main(void)
{
     int i, max, min;
     int sum = 0, imax = 0, imin = 0;
     double average;

     int num[data] = {9, -11, 23, 99, 43, -55, 5};

     printf("データ : ");

     for(i = 0; i < data; i++){
        printf("%d", num[i]);
        if(i < data - 1){
            printf(", ");
        }
     }

     printf("\n");

     printf("平均値 : ");
     for(i = 0; i < data; i++){
        sum += num[i];
     }
     printf("%.2f\n", sum / (double)data);


    max = 0;

    for (i = 0; i < data; i++) {

        if (max < num[i]) {
            max = num[i];
        }

        if(max == num[i]){
            imax = i;
        }
    }
    printf("最大値 : %d, 最大値の添字番号 : %d\n", max, imax + 1);

    min = 0;

    for (i = 0; i < data; i++) {

        if (min > num[i]) {
            min = num[i];
        }

        if(min == num[i]){
            imin = i;
        }
    }
    printf("最小値 : %d, 最小値の添字番号 : %d\n", min, imin + 1);

/*======================================================================*/
int j, input = 0;
int output[data] = {9, -11, 23, 99, 43, -55, 5};

    printf("検索したい数値：");
    scanf("%d", &input);

    for(i = 0; i < data; i ++){

     if(input > num[i]) {
            output[i] = input - num[i];
        }

     else {
            output[i] = num[i] - input;
        }
}

        min = output[0];

        for(i = 1, j = 0; i < data; i ++){

        if(output[i] < min){

        min = output[i];

        j = i;

        }
    }
       printf("入力された値 %d から一番距離が近い要素は %d 番目の %d です。", input, j + 1, num[j]);
       printf("\n");

       return 0;
}
