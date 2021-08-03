#include<iostream>
using namespace std;

void merge(int *array, int l, int m, int r) 
{
    int i, j, k, nl, nr;
    nl = m-l+1; nr = r-m;
    int larr[10], rarr[10];
   
    for(i = 0; i<nl; i++)
        larr[i] = array[l+i];
    for(j = 0; j<nr; j++)
        rarr[j] = array[m+1+j];
        i = 0; j = 0; k = l;
  
    while(i < nl && j<nr)
    {
        if(larr[i] <= rarr[j]) 
        {
            array[k] = larr[i];
            i++;
        }
        else
        {
            array[k] = rarr[j];
            j++;
        }
      k++;
   }
   while(i<nl) 
   {       
        array[k] = larr[i];
        i++; k++;
   }
   while(j<nr) 
   {     
        array[k] = rarr[j];
        j++; k++;
   }
}

void merge_sort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      
      merge_sort(array, l, m);
      merge_sort(array, m+1, r);
      merge(array, l, m, r);
   }
}

void display(int *array, int size) 
{
    int flag=0;
    for(int i = 0; i<size; i++)
    if(array[i]==array[i+1])
    {
        flag=1;
    }
    if(flag==1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
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
        merge_sort(arr,0,N-1);
        display(arr,N);
    }
    return 0;
}