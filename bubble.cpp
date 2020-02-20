#include <bits/stdc++.h>
using namespace std;

/*void bubble(int a[],int n)
{ 
	int s=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			swap(a[j],a[j+1]);
			s++;
			}
		}
	}
	cout<<"\nThe array in sorted order is: ";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";

	cout<<endl;
	
	if(s==0)
	cout<<"\nAlready Sorted Array\n";
	else
	cout<<"\nThe number of swaps are :"<<s<<endl;
}

void selection(int a[],int n)
{
	int pos,count=0;
	for(int i=0;i<n-1;i++)
	{
		 pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
			{
				pos=j;	
				count++;			
			}
		}
		swap(a[pos],a[i]);
		
	}
	cout<<"\nThe array in sorted order is: ";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";

	cout<<endl;
	
	if(count==0)
	cout<<"\nAlready Sorted Array\n";
	else
	cout<<"\nThe number of swaps are :"<<count<<endl;
}*/

void insertion(int a[],int n)
{
	int j,count=0;
	for(int i=1;i<n;i++)
	{

		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			swap(a[j],a[j-1]);
			j--;
			count++;
		}
	}
	cout<<"\nThe array in sorted order is: ";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";

	cout<<endl;
	
	if(count==0)
	cout<<"\nAlready Sorted Array\n";
	else
	cout<<"\nThe number of shifts are :"<<count<<endl;
}
 
int main() 
{
	
	int n;
	cout<<"\nEnter the size";
	cin>>n;
	int a[n];
	cout<<"\nEnter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	/*cout<<"\nBubble Sort :";
	bubble(a,n);


	cout<<"\nSelection Sort :";
	selection(a,n);*/


	cout<<"\nInsertion Sort :";
	insertion(a,n);

	return 0;
}