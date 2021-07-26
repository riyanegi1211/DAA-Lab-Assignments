/*WEEK 1
Question 2: Implementation of Binary Search Algorithm
*/ 

#include<iostream>

using namespace std;

void binary_search(int arr[],int N,int key)
{
    int count=0;
    int l=0,r=N-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(arr[mid]==key)
        {
            cout<<"Present "<<count+1<<endl;
            break;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
            count++;
        }
        else
        {
            r=mid-1;
            count++;
        }
    }
    if(r<l)
    cout<<"Not Present "<<count<<endl;
}

int main()
{
    int arr[100],t,j,i,N,key;
    cin>>t;                     // Enter the No. of test cases

    for(j=0;j<t;j++)
        {
            cin>>N;     // Enter the size of array
            for(i=0;i<N;i++)
            {
                cin>>arr[i];    // Enter the lements of array
            }
            
            cin>>key;           // Enter the value of key 
            binary_search(arr,N,key);
        }
    return 0;
}