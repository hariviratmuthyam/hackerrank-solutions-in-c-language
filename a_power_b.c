#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,i;
    long int s=1;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<b;i++){
        s=s*a;
    }
    printf("%ld",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
