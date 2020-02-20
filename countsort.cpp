#include<bits/stdc++.h>
using namespace std;

void count_sort(int *arr,int n)
{
    int max=*max_element(arr,arr+n);
    int min=*min_element(arr,arr+n);
    int range=max-min+1;
    int *freq=new int[range];
    memset(freq,0,sizeof(int)*range);

    for(int i=0;i<n;++i)
    {
        freq[arr[i]-min]++;
    }

    for(int i=1;i<range;++i)
    {
        freq[i]+=freq[i-1];
    }

    int *res=new int[n];

    for(int i=n-1;i>=0;i--)
    {
        res[--freq[arr[i]-min]]=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=res[i];
    }

    delete []freq;
    delete []res;
}

int main()
{
    int n;
    cin>>n;

    int *a=new int[n];
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<n;i++)
    cin>>a[i];

    count_sort(a,n);

    cout<<"\nThe array in sorted order is :\n";

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}