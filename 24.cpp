#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    cout<<"The resultant Table is :"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
    return 1;
}