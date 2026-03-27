#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num = 1;
    printf("No 1\n");
    for(int i = 1; i < 5; i++){
        int f = num * num;
        printf("%d X %d = %d\n",num,num,f);
        num = num*2;
    }
    
    return 0;
}