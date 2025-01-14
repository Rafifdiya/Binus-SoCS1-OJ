#include<stdio.h>
#include<string.h>

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	
	int t;
	fscanf(file, "%d\n", &t);
	
	char singkat[105][105];
	char normal[105][105];
	
	int i;
	
	// Read the short and normal word pairs
	for(i = 0; i < t; i++){
		fscanf(file, "%[^#]#%s\n", singkat[i], normal[i]);
	}
	
	int n;
	fscanf(file, "%d\n", &n);
	
	// Process each sentence
	for (i = 0; i < n; i++){
		char temp[105];
		char *token;
		char words[105][105];
		
		fscanf(file, "%[^\n]\n", temp); // Read the sentence

		token = strtok(temp, " ");
		
		int a = 0;
		
		// Tokenize the sentence and replace short words with normal words
		while(token != NULL){
			strcpy(words[a], token);
			int j;
			for(j = 0; j < t; j++){
				if (strcmp(words[a], singkat[j]) == 0){
					strcpy(words[a], normal[j]);
					break;
				}
			}
			a++;
			token = strtok(NULL, " ");
		}
		
		// Print "Case #x:" where x is the case number
		printf("Case #%d:\n", i+1);
		
		// Print the words in the sentence
		int j;
		for (j = 0; j < a; j++){
			printf("%s", words[j]);
			if (j != a - 1){
				printf(" "); // Print a space between words, but not after the last word
			}
		}
		
		// Print a newline after each case except the last one
		if(i != n-1)
		{
			printf("\n");
		}	
	}
	fclose(file);
	return 0;
}

