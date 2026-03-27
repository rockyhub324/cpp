#include <stdio.h>

int main(){
    
    int tangga = 4;
    printf("No 2\n");
    for(int i = 1; i <= tangga; i++){
        for(int j=1; j<= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}