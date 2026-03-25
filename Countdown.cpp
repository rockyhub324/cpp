#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){
    int count;
    char f[2];
    
    do{
        printf("Masukan angka untuk countdown : ");
        scanf("%d", &count);

        printf("Countdown dimulai : \n");
        while(count >= 0){
            printf("%d\n",count);
            Sleep(1000);
            count--;
        }
        printf("Waktu Habis");

      printf("\nLanjutkan ? (Y/N) : \n");
      scanf("%s", f);

      if (strcmp(f, "y") == 0) {
      continue;
      } 
      else {
      printf("Terima Kasih");
      break;
      }

    }while (true);

    return 0;
}