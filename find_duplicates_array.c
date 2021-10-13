#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[100],i,j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        
        }
        if(count!=0){
            printf("%d\t",arr[i]);
        }
    }
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
