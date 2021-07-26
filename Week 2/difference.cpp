#include<iostream>
#include<cmath>

using namespace std;

void difference(int arr[],int N,int key)
{
    int i,j,flag=0,count=0;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(abs(arr[i]-arr[j])==key)
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    int arr[100],t,j,i,N,key;
    cin>>t;                      // Enter the No. of test cases

    for(j=0;j<t;j++)
        {
            cin>>N;             // Enter the size of array
            for(i=0;i<N;i++)
            {
                cin>>arr[i];    // Enter the lements of array
            }
            
            cin>>key;           // Enter the value of key 
            difference(arr,N,key);
        }
    return 0;
}