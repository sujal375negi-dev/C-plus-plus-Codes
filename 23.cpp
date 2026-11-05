#include<iostream>                           //program to print prime numbers
#include<vector>
using namespace std;
int main()
{
    int num;
    cout<<"enter num"<<endl;
    cin>>num;
    for(int i=2;i<=num;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<i<<" ";
        }
    }
    return 1;
}