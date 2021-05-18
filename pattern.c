//this pattern will be printed
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
=================================================================================

// this code is written using 2-D array
#include<stdio.h>
#include<stdlib.h>

int main()
{ 
	int i, j, n, k;
	int arr[2*n-2][2*n-2];
	printf("enter n");
	scanf("%d",&n);
	for(k=n;k>=0;k--)
	{
	for(i=0;i<=2*k-2;i++)
	{
		for(j=0;j<=2*k-2;j++)
		{
			if(i=0 || i==2*k-2)
			{
				arr[i][j]=k;
			}
			else if(j=0 || j==2*k-2)
			{
           arr[i][j]=k;
		
			}
		}
	}
	}
	for(i=0;i<=2*n-2;i++)
	{
		for(j=0;j<=2*n-2;j++)
		{
			printf("%d",arr[i][j]);
		}
	printf("\n");
	}
}
=======================================================================
//this code works perfectly
#include <stdio.h>
#include <stdlib.h>
	
	int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
		//if i<j is true then min = i else min =j
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

==============================================================================
//this written using 1-D array
  
#include<stdio.h>
int main()
{
    int n,size,center,count,i,start,end;
    scanf("%d",&n);
    size = (2*n)-1;
    center = (size-1)/2;
    int arr[size];
    for(i=0;i<size;i++)
    {
        arr[i]=n;
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    start=0;
    end=size-1;
    for(count=0;count<center;count++)
    {
        //printf("%d\n",count);
        start=1+start;
        end=end-1;
        //printf("%d\n%d\n",start,end);
        if(start==0)
        {
            //do nothing
        }
        else
        {
            //printf("Check\n");
            for(i=start;i<=end;i++)
            {
                arr[i]--;
            }
        }
        for(i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
    }
    arr[center]++;
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    start=center;
    end=center;
    while(start>1)
    {
        start--;
        end++;
        for(i=start;i<=end;i++)
        {
            arr[i]++;
        }
        for(i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
