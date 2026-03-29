//Nama : Rocky Gunawan
//Kelas : SI-B
//NIM : 825250080

#include <stdio.h>

int main(){
    printf("Menentukan Apakah Suatu Bilangan Ganjil atau Genap\n");
    int array[10]={};
    int genap[10]={};
    int ganjil[10]={};
    int gen=0, gan=0;

    for(int i=0; i<10; i++){
        printf("Masukan bilangan ke %d : ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        if (array[i]%2==0){
            genap[gen] = array[i];
            gen++;
        }
        else if (array[i]%2!=0){
            ganjil[gan] = array[i];
            gan++;
        }
    }
    printf("Genap :\n");
    for(int l=0; l < gen; l++)printf("%d\n",genap[l]);
    printf("Ganjil :\n");
    for(int l=0; l < gan; l++)printf("%d\n",ganjil[l]);
    return 0;
}
  
  