/*WEEK 3
Question 2: Implementation of Selection Sort Algorithm.

Time Complexity: O(n^2)
Space Commplexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int N)
{
    int i,j,min,temp,swaps=0,comp=0;
    for(i=0;i<N-1;i++)
    {
        min=i;
        for(j=i+1;j<N;j++)
        {
            comp++;
            if(arr[j]<arr[min])
            {
                min=j;
            }        
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        swaps++;

    }
    cout<<"Shifts "<<swaps<<endl;
    cout<<"Comparisons "<<comp<<endl;
}

void print(int arr[], int N)
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
    int t,N,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>N;
        int arr[100];

        for(j=0;j<N;j++)
        {
            cin>>arr[j];
        }
        selection_sort(arr,N);
        print(arr,N);
    }
    return 0;
}
