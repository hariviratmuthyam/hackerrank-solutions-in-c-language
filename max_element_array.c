#include <stdio.h>


int main() {
    int n,i;
    long int arr[100],temp;
    scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%ld",&arr[i]);
            temp=arr[0];
        }
       for(i=1;i<n;i++){
            if(temp<arr[i]){
                temp=arr[i];
            }
        }
    printf("%ld",temp);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
