#include <stdio.h>
#include <string.h>

int main(){
 FILE *fp;
 fp = fopen("testdata.in", "r");
 if (!fp)
 {
  printf("File not found.\n");
  return 1;
 }
 
 int t, k;
 char s[1010]; 
 fscanf(fp, "%d", &t);
 
 for (int i=0; i<t; i++)
 {
   fscanf(fp, " %d", &k);
   fscanf(fp, " %[^\n]", &s);
   
   int len = strlen(s);
   
   for (int j=0; j<len; j++)
   {
    if (s[j] == '0')
    {
     s[j] = 'O';
   }
    
      else if (s[j] == '1')
   {
     s[j] = 'I';
   }
   else if (s[j] == '3')
   {
     s[j] = 'E';
   }
   else if (s[j] == '4')
   {
     s[j] = 'A';
   }
   else if (s[j] == '5')
   {
     s[j] = 'S';
   }
   else if (s[j] == '6')
   {
     s[j] = 'G';
   }
   else if (s[j] == '7')
   {
     s[j] = 'T';
   }
   else if (s[j] == '8')
   {
     s[j] = 'B';
   }
   }
   
   //melakukan dekripsi rotasi untuk hurup kapital(A-Z)
   for (int j=0; j< len; j++)
   {
    //jika karakter kapital dan bukan spasi 
    if ((s[j] >= 'A' && s[j] <= 'Z') && s[j] != ' ')
    {
     s[j] -= k; //rotasi huruf mundur sejumlah 'k'
     if (s[j] < 'A')
     {
      s[j] += 26; //jika melewati 'A', kembali ke 'Z'
     }
   }
   }
   
   printf("Case #%d: %s\n", i + 1, s);
 }
 
 fclose(fp);
 return 0;
}

