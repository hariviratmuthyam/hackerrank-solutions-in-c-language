#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int a,b,c;
    scanf("%ld%ld%ld",&a,&b,&c);
    if((a+b<=c)||(a+c<=b)||(b+c<=a))
    {
        printf("No");
    }
    else{
        printf("Yes");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
