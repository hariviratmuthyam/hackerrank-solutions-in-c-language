#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n,s=0,r,rem;
    scanf("%ld",&n);
    r=n;
    while(n>0){
        rem=n%10;
        s=s+(pow(rem,3));
        n=n/10;
    }
    if(s==r){
        printf("Yes");
    }
    else{
        printf("No");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
