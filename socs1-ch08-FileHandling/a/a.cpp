#include<stdio.h>
#include<string.h>

//Struct buat nyimpen data teman dari Yuri
struct DataTeman
    {
        char nama_teman[40];
        char nama_tanaman[40];
    };

int main(){
    FILE* fp = fopen("testdata.in", "r");
    if (!fp){
        printf("Gagal membaca file, file tidak ada!");
        return 1;
    }
    
    int N, T;
    char buffer[40];
    DataTeman datake[40];

    //Baca jumlah data pada baris pertama
    fscanf(fp, "%d\n", &N);
    // printf("%d\n", N);

    // Baca data teman dan tanaman
    for (int i = 0; i < N; i++)
    {
        //Membaca data per baris, menyimpan nya di buffer, lalu menghapus new line diganti dengan null agar tidak bentrok
        fgets(buffer, sizeof(buffer), fp);
        buffer[strcspn(buffer, "\n")] = '\0';

        //memisahkan string berdasarkan separasi "#"
        char *nama_teman = strtok(buffer, "#");
        char *nama_tanaman = strtok(NULL, "#");

        //Simpan hasil parsing ke struct
        strcpy(datake[i].nama_teman, nama_teman);
        strcpy(datake[i].nama_tanaman, nama_tanaman);
    }

    //Baca jumlah testcase
    fscanf(fp, "%d\n", &T);
    // printf("%d\n", T);

    char nama_teman_cari[11];

    for (int i = 0; i < T; i++) {
        fgets(nama_teman_cari, sizeof(nama_teman_cari), fp);
        nama_teman_cari[strcspn(nama_teman_cari, "\n")] = '\0'; // Hapus newline

        // Cari nama teman dalam data
        int found = 0;
        for (int j = 0; j < N; j++) {
            if (strcmp(datake[j].nama_teman, nama_teman_cari) == 0) {
                printf("Case #%d: %s\n", i + 1, datake[j].nama_tanaman);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Case #%d: N/A", i + 1);
        }
    }

    fclose(fp);
    return 0;
}