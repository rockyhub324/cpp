#include <stdio.h>

int main(){
   
    int y = 3, z = 4, x = 8, xy = 7  ;
    int a = 8, ab=10;

    int tinggi = 5;

    for(int i = 1; i <  6; i++){
        
        for(int j = 0; j <= tinggi - i; j++){
            printf("*");
        }
        printf("%d ",xy);
        printf("%d\n",ab);
        ab=ab + a;
        xy = xy+x;
        if(i % 2 == 0) x = x + y;
        if(i % 2 != 0) x = x + z;
        if(xy == 61)xy=59; 
        a-=2;

        
    }

    return 0;
}