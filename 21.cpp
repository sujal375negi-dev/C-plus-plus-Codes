#include<iostream>                      //Search In A 2D Matrix Where Rows And Columns Are Sorted In Ascending Order
using namespace std;
int main()
{
    int row, column;
    cout<<"enter row and column"<<endl;
    cin>>row;
    cin>>column;
    int matrix[row][column];
    cout<<"enter elements in matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int target;
    cout<<"enter target"<<endl;
    cin>>target;

    int p=0;
    int q=column-1;
    while(p<row&&q>=0)
    {
        if(matrix[p][q]==target)
        {
            cout<<"target is present in the matrix"<<endl;
            return 1;
        }
        else if(matrix[p][q]<target)
        {
            p++;
        }
        else if(matrix[p][q]>target)
        {
            q--;
        }
    }
    cout<<"target in not present in the matrix"<<endl;
    return 0;
}