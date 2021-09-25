/*WEEK 2
Question 3. Given an array of non-negative integers, design an algorithm and
 a program to count the number of pairs of integers such that their difference
 is equal to a given key, K.
 
 Time Complexity: O(n^2)
 Space Complexity: O(1)
*/

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
