#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int N)
{
    int i,j,min,comp=0,swaps=0;
    for(i=1;i<N;i++)
    {
        min=arr[i];
        j=i;
        while(j>=0 && arr[j-1]>min)
        {
            arr[j]=arr[j-1];
            j--;
            comp++;
        }
        arr[j]=min;
        swaps++;
    }
    cout<<"Shifts "<<swaps<<endl;
    cout<<"Comparisons "<<comp<<endl;
}

void print(int arr[],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t,N,i,j,arr[100];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>N;
        for(j=0;j<N;j++)
        {
            cin>>arr[j];
        }
        insertion_sort(arr,N);
        print(arr,N);
    }
    return 0;
}