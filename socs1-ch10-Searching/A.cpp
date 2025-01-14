#include<stdio.h>
#include<string.h>
int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	
	int t;
	fscanf(file, "%d\n", &t);
	
	char singkat[105][105];
	char normal[105][105];
	
	for(int i = 0; i < t; i++){
		fscanf(file, "%[^#]#%s\n", singkat[i], normal[i]);
	}
	
	int n;
	fscanf(file, "%d\n", &n);
	
	for (int i = 0; i < n; i++){
		char temp[105];
		char *token;
		char words[105][105];
		
		fscanf(file, "%[^\n]\n", temp);

		token = strtok(temp, " ");
		
		int a = 0;
		
		while(token != '\0'){
			strcpy(words[a], token);
			for(int j = 0; j < t; j++){
				if (strcmp(words[a], singkat[j]) == 0){
					strcpy(words[a], normal[j]);
					break;
				}
			}
			a++;
			token = strtok(NULL, " ");
		}
		
		printf("Case #%d:\n", i+1);
		for (int j = 0; j < a; j++){
			printf("%s", words[j]);
			
				printf(" ");
		
		}
		if(i != n-1)
		{
			printf("\n");
		}	
	}
	fclose(file);
	return 0;
}
