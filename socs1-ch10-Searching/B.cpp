#include <stdio.h>
#include <string.h>

struct mahasiswa{
	char nim[15];
	char name[25];
};

int main (){
	struct mahasiswa mhsigma[101];
	FILE *f;
	f = fopen("testdata.in","r");
	
 	int n;
 	fscanf(f, "%d\n", &n);
 
	for (int i = 0; i < n; i++){ 
		fscanf(f, "%s %[^\n]\n", mhsigma[i].nim, mhsigma[i].name);
 	}
 
 	int t;
 	fscanf(f, "%d\n", &t);
 
 	for(int i = 0; i < t; i++){
  		char target[15];
  		fscanf(f, "%s\n", target);
  
  	int found = 0;
  	for (int j = 0; j < n; j++){
   		if(strcmp(target, mhsigma[j].nim) == 0){
    		printf("Case #%d: %s\n", i + 1, mhsigma[j].name);
    		found = 1;
   		}
	} if (!found){
		printf("Case #%d: N/A\n", i + 1);
  	}
} fclose(f);
 
return 0;
}

