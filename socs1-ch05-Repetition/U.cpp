#include<stdio.h>
#include<string.h>

int main(){
    int Tc, x;
    char y[101];
    scanf("%d",&Tc);			
    for (int i = 0; i < Tc; i++)
    {
        scanf("%d", &x);
        scanf("%s", y);
        int lili = 0, bibi =0;		
//        for (int j = 0; j < strlen(y); j++)
    for (int j = 0; j < strlen(y); j++)
        {
            if (y[j] == 'B')		
            {
                bibi++;
            } else if (y[j] == 'L'){
                lili++;
            }
            
        }
        
        if (bibi > lili)
        {
            printf("Bibi\n");
        } else if (bibi < lili){
            printf("Lili\n");
        } else {
            printf("None\n");
        }
        
    }
    return 0;
}
