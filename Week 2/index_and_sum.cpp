#include<iostream>
#include<cmath>

using namespace std;

void sum(int arr[],int N)
{
    int i,j,flag=0,;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if((arr[i]+arr[j]))
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    cout<<i<<j<<j+1<<endl;
    else
    cout<<"No pair found"<<endl;
}

int main()
{
    int arr[100],t,j,i,N;
    cin>>t;                      // Enter the No. of test cases

    for(j=0;j<t;j++)
        {
            cin>>N;             // Enter the size of array
            for(i=0;i<N;i++)
            {
                cin>>arr[i];    // Enter the lements of array
            }
             
            sum(arr,N);
        }
    return 0;
}