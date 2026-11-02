#include<iostream>                                          //Selection Sort
#include<climits>
using namespace std;
int main()
{
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter "<<size<<" elements in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<size;i++)
    {
        int minindex=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }

    cout<<"resultant array is : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}