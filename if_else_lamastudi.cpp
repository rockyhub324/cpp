#include <stdio.h>
#include <string.h>

int main(){
    int lama_studi;
    char i[2];

    do{
        printf("Berapa lama studi : ");
        scanf("%d", &lama_studi);

        if (lama_studi <= 0){
            printf("Invalid");
        }
        else if(lama_studi <= 4){
            printf("Tepat waktu");
        }
        else{
            printf("Tidak tepat waktu");
        }

        printf("\nLanjutkan ? (Y/N) : ");
        scanf("%s", i);

        if (strcmp (i,"y") == 0){
            continue;
        }
        else{
            break;
        }

        }while (true);
   
    return 0;
}
