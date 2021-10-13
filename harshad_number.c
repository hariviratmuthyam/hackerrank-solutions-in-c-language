#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n, s=0,r,rem;
    scanf("%ld",&n);
    r=n;
    while(n>0){
        rem=n%10;
        s=s+rem;
        n=n/10;
    }
    if(r%s==0)
        printf("Yes");
    else
        printf("No");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
