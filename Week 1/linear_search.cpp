#include<iostream>

using namespace std;

void linear_search(int arr[], int N,int key){
int flag=0,count=0,i;
    for(i=0;i<N;i++){
        if(arr[i]==key){
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
            linear_search(arr,N,key);
        }
    return 0;
}