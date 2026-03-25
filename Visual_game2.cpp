#include <stdio.h>
#include <string.h>

int main(){
  int a = 0;
  int x = 4 ;
  for(int i = 0; i < 1; i++){
      for (int i= x - 1; i>=1; i--){
        for(int j=1; j <= x-i; j++){
             printf(" ");
        }
        for(int l = 1; l <= (2*i-1); l++){
            printf("*");
        }
        printf("\n");
  }
   }
       for(int i=1; i <= 2; i++){
        for(int j = 0; j <= 2 - i; j++){
             printf(" ");
             if(j==1)printf("*");
        }
        for(int l = 1; l <= (3*i-1); l++){
           printf("*");
           
        }
        printf("\n");
    }

    return 0;
}