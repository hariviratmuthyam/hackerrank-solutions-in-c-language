#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    long int a[100];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%ld",&a[i]);
      }
      for(i=n-1;i>=0;i--){
         if(i==0)
             printf("%ld",a[i]);
         else 
              printf("%ld\t",a[i]);
          
      }
              
    
     
    return 0;
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
