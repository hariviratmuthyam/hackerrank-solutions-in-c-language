#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,f=1;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        f=f*i;
    }
    printf("%d",f);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
