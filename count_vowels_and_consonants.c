#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[100];
    int i,l,count=0,count1=0;
    scanf("%[^\n]%*c", a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if((a[i]=='A') ||(a[i]=='E') ||(a[i]=='I') ||(a[i]=='O') ||(a[i]=='U')){
            count++;
        }
         else if((a[i]=='a') ||(a[i]=='e') ||(a[i]=='i') ||(a[i]=='o') ||(a[i]=='u')){
            count++;
        }
        else{
            count1++;
        }
    }
         printf("%d %d",count,count1);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
