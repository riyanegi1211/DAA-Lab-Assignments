/*WEEK 1
Question 1: Implementation of Binary Search Algorithm

Time Complexity: O(logn)
Space Complexity: O(1)
*/ 

#include<iostream>
#include<cmath>

using namespace std;

void jump_search(int arr[], int key,int n){
int flag=0,count=0,low=0;
int jump = sqrt(n);

if(arr[0]>key  || arr[n-1]<key)
{
    count++;
    flag=0;
}

else
{
while(arr[jump]<=key && jump < n){
    count++;
    low = jump;
    jump+=sqrt(n);
    if(jump > n-1){
        jump=n;
        break;
    }
}

for(int i= low;i<jump;i++)
    {
        if(arr[i]==key)
        {
            count++;
            flag=1;
            break;
        }
        else
        count++;
    }
}

if (flag==1)
        cout<<"Present "<<count<<endl;
else
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
            jump_search(arr,N,key);
        }
    return 0;
}
