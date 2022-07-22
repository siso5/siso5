/* 第6回　課題2-k2-5 */

/* K2-5 */
// （2点）
// 単一換字式暗号
// （たんいつかえじしきあんごう、Simple substitution cipher）とは、
// 換字式暗号の一種で、平文の文字に対して、
// 暗号文の文字が常に同じ文字に変換されるような暗号のことである。
// 例えば、平文の“d”が、暗号文で必ず“a”になるならば、
// それは単一換字式暗号である。この単一換字式暗号のプログラムを作成しなさい。
// 以下は単一換字式暗号における文字の変換の例である。

// 前 a b c d e f g h i j k l m n o p q r s t u v w x y z 
// 後 g m y u r z b w x o q c e i f n d v t s k p j l a h

//  !!!正しくはokayama >> FQGAGEG!!!
//  !!!(間違え：FQGQGEG << okakaya)!!!

// 1. キーボードから平文を小文字のアルファベットで入力し、
//    文字列配列plain（要素数50）に代入すること。（spaceを使用しない入力）
// 2. 暗号文（大文字のアルファベットで表示する）を求め、
//    文字列配列cipher（要素数50）に格納する。
// 3. cipherの文字列を暗号文として出力しなさい。

/*【実行例】*/
// t21j000@pc00:~/kisopro2/exercise$ ./k25<ENTER>
// キーボードから平文を小文字のアルファベットで入力して下さい：okayama<ENTER>
// okayamaの暗号文（大文字）はFQGAGEGです。
// t21j000@pc00:~/kisopro2/exercise$



/*【ソースコード】*/
#include<stdio.h>
int main(void)
{
    char plain[50], cipher[50];
    int i, num;

      char input[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
     char output[26] = { 'g', 'm', 'y', 'u', 'r', 'z', 'b', 'w', 'x', 'o', 'q', 'c', 'e', 'i', 'f', 'n', 'd', 'v', 't', 's', 'k', 'p', 'j', 'l', 'a', 'h'};


    printf(" ※ spaceを使用しないで入力してください\nキーボードから平文を小文字のアルファベットで入力して下さい。(入力文字 : 最大50文字) :  ");
    scanf("%s", plain);

    printf("%s の暗号文（大文字）は ", plain);

    for(i = 0; plain[i]!='\0'; i++)
    {
        for(num = 0; num < 26; num++){
            if(plain[i] == input[num])
                {
                    cipher[i] = output[num];
                    cipher[i] -= 'a' - 'A';   
                }
        }
        printf("%c", cipher[i]);
    }

    printf(" です。\n");
    return 0;
    
}
