/* Format input =
Baris pertama T yaitu banyaknya test case.
Baris kedua yaitu string S yang berupa rangkaian alphabet a-z.
Baris ketiga yaitu string U yang merupakan urutan alphabet a-z yang harus disusun adik Shuri.

Format output =
S yang sudah diurutkan sesuai urutan U.

Sample input (contoh) =
3 //3 disini sebagai test case 
abcabcabc
ba
aeeaaeaeffgg
eag
gfhefhgehfgijijkk
hgk

Sample output(contoh):
Case 1: aaabbb
Case 2: aaaaeeeegg
Case 3: ggghhhkk */

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char S[1001], U[27];
    int T;
    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++)
    {
        char kalimat[1001], susunan[27];

        //baca string awal
        scanf("%s", kalimat);
        //baca string target
        scanf("%s", susunan);

        for (int j = 0; kalimat[j] != '\0'; j++)
        {
            
        }
        
    }


    
    

    return 0;
}