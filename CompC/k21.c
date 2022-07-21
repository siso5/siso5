/* 第6回　課題2-k2-1 */

/* K2-1 */
// (2 点）F 0 = 0, F 1 = 1 としたとき，F n = F n-1 + F n-2 (n≧2)で示される値を 
// n 番目のフィボナッチ数という。さて，整数型変数 n に任意の整数値をキーボードから入力し，
// n 個までのフィボナッチ数をすべて出力しなさい。その他，変数は n 以外に
// int i, f0=0, f1=1, fnext;
// を宣言して使用することをおすすめする。


/*【実行例】*/
// t21j000@pc00:~/kisopro2/exercise$ ./k21 <enter>
// 何番目まで：7
// f1 f2 f3 f4 f5 f6 f7
//  1  1  2  3  5  8 13
// t21j000@pc00:~/kisopro2/exercise$



/*【ソースコード】*/
#include <stdio.h>
int main(void)
{
     int n;
     int i, f0 = 0, f1 = 1, fnext;

     printf("何番目までのフィボナッチ数を表示させますか : ");
     scanf("%d", &n);

     printf("f1\t");

     for(i = 2; i <= n; i++) {
          printf(" f%d\t", i);
     }    
     printf("\n"); 


     printf("1\t");

     for(i = 2; i <= n; i++) {

          fnext = f1 + f0;
          f0 = f1;
          f1 = fnext;
           
          printf(" %d\t", fnext);
     }

     printf("\n");

     return 0;
}