#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int w,l,i,j;
    scanf("%d%d",&w,&l);
    for(i=1;i<=l;i++){
        for(j=1;j<=w;j++){
            if((i==1)||(i==l)||(j==1)||(j==w)){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
