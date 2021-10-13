#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,s;
    scanf("%d",&n);
    s=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",s);
            s++;
        }
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
