#include<iostream>                   //Program to check wheather two strings are Anagram or not
using namespace std;
int main()
{
    string s1;
    string s2;
    cout<<"enter string 1"<<endl;
    cin>>s1;
    cout<<"enter string 2"<<endl;
    cin>>s2;

    if(s1.size()!=s2.size())
    {
        cout<<"Strings are not Anagram"<<endl;
        return 0;
    }

    int arr1[26]={0};
    int arr2[26]={0};

    for(int i=0;s1[i]!='\0';i++)
    {
        int index=s1[i]-97;
        arr1[index]++;
    }

    for(int i=0;s2[i]!='\0';i++)
    {
        int index=s2[i]-97;
        arr2[index]++;
    }


    for(int i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            cout<<"Strings are not Anagram"<<endl;
            return 1;
        }
    }
    cout<<"Both Strings are Anagram"<<endl;
    return 2;
}