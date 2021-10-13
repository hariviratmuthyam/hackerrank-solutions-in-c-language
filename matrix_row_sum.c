#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,i,j,arr[100][100],s=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             scanf("%d",&arr[i][j]);
    }
    }
    for(i=0;i<n;i++){
        s=0;
         for(j=0;j<m;j++){
             s=s+arr[i][j];
         }
    printf("%d\n",s);
    }

    /* Enter your code here. Read input from STDIN. Print ouput to STDOUT */    
    return 0;
}
