#include <stdio.h>
#include <string.h>

int main(){
    FILE *fileX = fopen("data1.txt", "r"); //Syntax membuka file utk dibaca
    if(fileX == NULL){
        printf("File tidak ada, dan tidak dapat dibaca!"); //Jika file tidak bisa dibuka
        return 1;
    }

    char line[50]; //Buffer utk membaca tiap baris, buffer = memori sementara yg disimpan di RAM
    
    //fungsi untuk membaca data
    //fgets = ambil data "Hanya 1 baris"
    //fgets punya 3 parameter = fgets(nyimpen, ukuran ambil data, letak file)
    while (fgets(line, sizeof(line), fileX)){
    	
	}
    


    return 0;
}
