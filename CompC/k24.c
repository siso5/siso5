/* 第6回　課題2-k2-4 */

/* K2-4 */
// （2点）まず要素数30のnameと名付けたchar型配列（文字列）を宣言しなさい。
// キーボードから自分の名前をアルファベットで入力し、nameに代入すること。
// （spaceを使用しない入力）
// 次に、以下の問題を解決するプログラムを記述しなさい。
// 1. 自分の名前の長さを求める。
// （ヒント：文字列は’\0’のNULL文字で終わる）
// 2. 自分の名前を逆順で出力する。
// 3. 自分の名前の中に含まれる「a」あるいは「u」
// （’a’, ‘A’, ‘u’, ‘U’）の文字数を数えて出力する。


/*【実行例】*/
// t21j000@pc00:~/kisopro2/exercise$ ./k24<ENTER>
// キーボードから自分の名前をアルファベットで入力して下さい：ElisKulla<ENTER>
// ElisKullaという名前の長さは9文字です。
// ElisKullaの逆順はalluKsilEです。
// ElisKullaに含まれるa(A)とu(U)は2文字です。
// t21j000@pc00:~/kisopro2/exercise$■



/*【ソースコード】*/
#include<stdio.h>
int main(void)
{
    char name[30];
    int i, count, num = 0;

    printf("キーボードから自分の名前をアルファベットで入力して下さい : ");
    scanf("%s", name);

    for(count = 0; name[count]!='\0'; count++){    
    }
    printf("%s という名前の長さは %d 文字です。\n", name, count);

    printf("%s の逆順は ", name);

    for(i = count; i >= 0; i--)
    {
        printf("%c", name[i]);
        if(name[i] == 'A'|| name[i] == 'U'|| name[i] == 'a'|| name[i] == 'u')
        {
           num++;
        }
    }

    printf(" です。\n");

    printf("%s に含まれるa(A)とu(U)は %d 文字です。\n", name, num);

    return 0;

}
