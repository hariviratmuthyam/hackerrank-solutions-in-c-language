#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[100],ch;
    int i,count=0,l;
    scanf("%[^\n]%*c",a);
    scanf("%c",&ch);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]==ch)
            count++;
    }
    printf("%d",count);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
