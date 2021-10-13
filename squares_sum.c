#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,s=0,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        s=s+i*i;
    }
    printf("%d",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
