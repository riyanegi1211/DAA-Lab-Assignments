/*WEEK 2
Question 1. Given a sorted array of positive integers containing few duplicate elements,
design an algorithm and implement it using a program to find whether the given
key element is present in the array or not. If present, then also find the number
of copies of given key. 

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

void duplicate(int arr[],int N,int key)
{int i,count=0,flag=0;
    int l=0,r=N-1;

    while(l<=r)
    {
        int mid=(l+r)/2;
 
        if(arr[mid]==key)
        {
            flag=1;
            break;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(flag==1)
    {
        for(i=0;i<N;i++)
        {
            if(arr[i]==key)
            count++;
        }
        cout<<key<<" - "<<count;
    }
    else
    cout<<"Key not present";

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
            duplicate(arr,N,key);
        }
    return 0;
}
