//Nama : Rocky Gunawan
//Kelas : SI-B
//NIM : 825250080

#include <stdio.h>

int main(){
    printf("Menentukan Temperatur Selama 7 hari\n");
    char *hari1[7] = {"Senin","Selasa", "Rabu","Kamis","Jumat","Sabtu", "Minggu" };
    int hari[7]={};
    float rata = 0;
    
    for(int i=0; i<7; i++){
        printf("Masukan temperatur hari %s : ", hari1[i]);
        scanf("%d",&hari[i]);
    }
    int min = hari[0];
    int max= hari[0];
    
    for(int i = 0; i<7; i++){
        rata+=hari[i];
    }
    rata = rata/7;
    printf("Rata-rata suhu adalah : %.2f Celcius ", rata);

    for(int l=0; l<7; l++){
        if(max<hari[l]) max = hari[l];
    }
    
    for(int l=0; l<7; l++){
        if(min>hari[l]) min=hari[l];
    }

    printf("\nSuhu paling panas dalam seminggu : %d",max);
    printf("\nSuhu paling dingin dalam seminggu : %d",min);
    return 0;
}
  
  