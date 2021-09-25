/*WEEK 2
Question 2. Given a sorted array of positive integers, design an algorithm and
implement it using a program to find three indices i, j, k such that
arr[i] + arr[j] = arr[k].

Time Complexity: O(n^3)
Space Complexity: O(1)
*/

#include<iostream>
#include<cmath>

using namespace std;

void sum(int arr[],int N)
{
    int a,b,c,flag=0;
    for(int i=0;i<N-2;i++)
    {
        for(int j=0;j<N-2;j++)
        {
           for(int k=0;k<N;k++)
           {
                if(arr[i]+arr[j]==arr[k])
                {   
                    a=i;b=j;c=k;
                    flag=1;
                    break;
                }
           }
        }
    }
    if(flag==1)
    cout<<b+1<<" "<<a+1<<" "<<c+1<<endl;
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
