#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     char a[100];
    int i,l,count=0;
    scanf("%[^\n]%*c", a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if((a[i]>=48)&&(a[i]<=57)){
            count++;
        }
        
    }
          if(count==l){
              printf("Yes");
          }
          else{
              printf("No");
          }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
