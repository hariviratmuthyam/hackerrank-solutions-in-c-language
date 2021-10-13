#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int n,m,i,j;
    long int a[100][100],b[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%ld",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        b[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[j]=b[j]+a[i][j];
        }
    }
    for(j=0;j<m;j++){
        printf("%ld\n",b[j]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
