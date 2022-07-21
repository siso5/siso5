/* 第6回　課題2-k2-3 */

/* K2-3 */
// （2点）以下の指示に従って、実行例のように出力できるプログラムを記述しなさい。
// a. まず、要素数4のdataと名付けたint型配列を宣言すること。
// b. そしてfor文を使用し、scanf関数を用いて、各要素に整数を入力すること。
// c. 次に、小さい順に配列dataの整数を整列（ソート）すること。
// d. 最後に、c.で書き換えた配列の要素を順番に出力すること。


/*【実行例】*/
// t21j000@pc00:~/kisopro2/exercise$ ./k23<ENTER>
// 整数1：8<ENTER>
// 整数2：4<ENTER>
// 整数3：6<ENTER>
// 整数4：1<ENTER>
// 入力した値を小さい順にソートしました：1 4 6 8
// t21j000@pc00:~/kisopro2/exercise$



/*【ソースコード】*/
#include<stdio.h>
int main(void)
{
    int data[4];
    int tmp, i, j;

    for(i = 0; i < 4; i++)
    {
        printf("整数%d : ", i + 1);
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 4; ++i) {
        for (j = i+1; j < 4; ++j) {
             if (data[i] > data[j]) 
                {
                    tmp =  data[i];
                    data[i] = data[j];
                    data[j] = tmp;
                }
        }
    }

    printf("入力した値を小さい順にソートしました : ");

  for (i = 0; i < 4; i++)
  {
    printf("%d  ", data[i]);
  }
  printf("\n");

  return 0;
}