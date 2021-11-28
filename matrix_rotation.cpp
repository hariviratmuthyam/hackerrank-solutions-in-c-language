#include<iostream>
using namespace std;
void rotate(int size)
{   int i,j;
    int ar[size][size];
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {  
            cin >> ar[i][j];
        }
    }
    for(j=0;j<size;j++)
    {
        for(i=size-1;i>=0;i--)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
 int main()
 {
     int time;
     cin >> time;
     for(int i=0;i<time;i++)
         {  int size;
            cout<<"Test Case #"<<i+1<<":"<<endl;
            cin>>size;
            rotate(size);
         }
 }
