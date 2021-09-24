/*WEEK 0
Question 1: Implementation of Linear Search Algorithm

Time Complexity: O(n)
Space Complexity: O(1)
*/ 

#include <iostream>

using namespace std;

void linear_search(int arr[],int N,int key)
{
    int i, flag=0,count=0;
    for(i=0;i<N;i++)
    {
        if(arr[i]==key)
        {   
            flag=1;
            count++;
            break;
        }
        else
        count++;
    }
    if(flag==1)
    cout<<"Present "<<count<<endl;
    else
    cout<<"Not Present "<<count<<endl;
}

int main()
{
  int arr[100],N,key,i,j,t;
  cin>>t;  
                  
  for(j=0;j<t;j++)
    {
        cin>>N;            
        for(i=0;i<N;i++)
        {
            cin>>arr[i];    
        }

        cin>>key;            
    linear_search(arr,N,key);
    }
  return 0;
}
