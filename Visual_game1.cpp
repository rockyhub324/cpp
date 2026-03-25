#include <stdio.h>
#include <string.h>

int main(){
  int a = 0;
  char alpha []={"A" "B" "C" "D" "E" "F" "G" "H" "I" "J"};
  for(int i = 0; i < 5; i++){
     for(int j = 0; j <= 5 - i; j++){
            printf(" ");
        }
     for(int j=1; j <= i; j++){
        printf("%c", alpha[a]);
        a++;
     }
     printf("\n");
    }
    return 0;
}