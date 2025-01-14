#include <stdio.h>
#include <string.h>

int main(){
 
 FILE *f;
 f = fopen("testdata.in","r");
 if (f == NULL){
  printf("Error opening file\n");
  return 1;
 }
 
 int t;
 fscanf(f, "%d\n", &t);
 
 char abv[105][105];
 char nor[105][105];
 
 for (int i = 0; i < t; i++){
  fscanf(f, "%[^#]#%s\n", abv[i], nor[i]);
 }
 
 int n;
 fscanf(f, "%d\n", &n);
 for(int i = 0; i < n; i++){
  
  char temp[105];
  char *token;
  char words[105][105];
  
  fscanf(f, "%[^\n]\n", temp);
  
  token = strtok(temp, " ");
  
  int a = 0;
  
  while(token != NULL){
  	strcpy(words[a], token);
   	for (int j = 0; j < t; j++){
    if (strcmp(words[a], abv[j]) == 0){
	 strcpy(words[a], nor[j]);
     break;
	 }
   }
   a++;
   token = strtok(NULL, " ");
  }
  
  printf("Case #%d:\n", i + 1);
  for (int j = 0; j < a; j++){
   printf("%s", words[j]);
   if (j < a - 1){
    printf(" ");
   }
  }
  printf("\n");
 }
 
 fclose(f);
 
 return 0;
}

