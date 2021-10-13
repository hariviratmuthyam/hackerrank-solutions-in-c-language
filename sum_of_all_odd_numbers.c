#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i,sum=0;
    long int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            sum=sum+arr[i];
        }
        
    }
    printf("%d",sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
