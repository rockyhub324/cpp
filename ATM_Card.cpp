#include<stdio.h>

int main (){
    int x, y, z, salah=0;
    do{ 
    printf("Masukan angka : ");
    scanf("%d", &x);
   
    if(x<=0)printf("Tidak boleh kurang dari 0\n");
    else if(x>=10000 || x<=999){
        printf("Tidak boleh kurang atau lebih dari 4 digit\n");
        continue;
    }
    else{
       
        printf("Apakah anda yakin ingin menggunakan pin ini (1 = simpan, 0 = ulang) : ");
        scanf("%d", &y);
        if(y==1)break;
        else if(y==0){
        continue;
        }
        }
    }while (true);
  
    do{
        if(salah==3){
            printf("Kartu Anda Terblokir");
            break;
        }
        printf("Masukan ulang pin : ");
        scanf("%d",&z);

        if (z==x){
            printf("Anda sudah masuk\n");
            break;
        }
        else printf("Anda salah\n");
        salah++;
        continue;

    }while(true);

    return 0;
}