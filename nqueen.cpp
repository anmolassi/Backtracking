#include<iostream>
using namespace std;
int ans[100]={0};
bool isSafe(int row,int col)
{
    for(int j=1;j<row;j++)
    {
        if((ans[j]==col)||(abs(ans[j]-col)==abs(j-row)))
        {
            return false;
        }
    }
    return true;
}
bool nqueen(int row,int col)
{
    for(int i=1;i<=col;i++)
    {
        if(isSafe(row,i))
        {
            ans[row]=i;
            if(row==col)
            {
                for(int j=1;j<=col;j++)
                {
                    cout<<ans[j]<<" ";
                }
                cout<<endl;
            }
            else
            {
                nqueen(row+1,col);
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of boxes in single row of chessboard: ";
    cin>>n;
    nqueen(1,n);
    return 0;
}