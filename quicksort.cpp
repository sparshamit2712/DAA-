#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(int arr[],int left,int right,int *c)
{
    int i = left-1, j = left, pvt = arr[right];
    while(j<=right)
    {
        if(pvt>=arr[j])
        {
            i++;
            swap(arr[i],arr[j]);
            *c=*c+1;
        }
        j++;
    }
    return i;
}

void quicksort(int arr[],int left,int right,int *c)
{
    if(left<=right)
    {
        int p = partition(arr,left,right,c);
        quicksort(arr,left,p-1,c);
        quicksort(arr,p+1,right,c);
        
    }
}

int main()
{
    
    cout<<"Enter total no. of elements"<<endl;
    int n,c=0;
    int *pc=&c;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   quicksort(arr,0,n-1,pc);
   cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Number of swaps"<<c<<endl;
    return 0;
}
