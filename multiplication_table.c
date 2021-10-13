#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n;
    int i;
    scanf("%ld", &n);
    for(i=1;i<=10;i++){
        printf("%ld * %d = %ld\n",n,i,(n*i));
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
