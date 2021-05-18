#include <stdio.h>

int max(int a, int b)
{
    if(a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans1 = max(a, b);
    int ans2 = max(ans1, c);
    int ans3 = max(ans2, d);
    printf("%d", ans3);
    
    return 0;
}
