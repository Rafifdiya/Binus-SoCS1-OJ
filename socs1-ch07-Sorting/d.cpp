#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    file = fopen("testdata.in", "r");
    char vid[105][1005];
    char name[105][1005];
    int view[105];

    int count = 0;
    while(!feof(file)){
        fscanf(file, "%[^#]#%[^#]#%d\n", vid[count], name[count], &view[count]);
        count++;
    }
    //mengurutkan video berdasarkan jumlah penonton
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count - 1; j++){
            if (view[j+1] > view[j]){
                int temp = view[j];
                view[j] = view[j+1];
                view[j+1] = temp;

                char temp1[1005];
                strcpy(temp1, vid[j]);
                strcpy(vid[j], vid[j+1]);
                strcpy(vid[j+1], temp1);

                strcpy(temp1, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp1);
            }
        }
    }
    //jika ada video yang jumlah penontonnya sama
    for(int i = 0; i<count - 1;i++){
        for(int j = 0; j < count-1; j++){
            if(view[j+1] == view[j]){
                if(strcmp(vid[j+1], vid[j])<0){
                    //tukar judul dan nama vid
                    char temp1[1005];
                    strcpy(temp1,vid[j]);
                    strcpy(vid[j], vid[j+1]);
                    strcpy(vid[j+1], temp1);

                    //tukar nama pembuat / artis yang terkait
                    strcpy(temp1, name[j]);
                    strcpy(name[j], name[j+1]);
                    strcpy(name[j+1], temp1);
                }
            }
        }
    }
    //menampilkan hasil pengurutan
    for(int i = 0; i<count;i++){
        printf("%s by %s - %d\n", vid[i], name[i], view[i]);
    }
    fclose(file);
    
    return 0;
}

