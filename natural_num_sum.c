#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n,s=0;
    int i;
    scanf("%ld",&n);
    for(i=0;i<=n;i++){
        s=s+i;
    }
    printf("%ld",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
