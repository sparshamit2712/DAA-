#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int>a,int n)
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

void selection(vector<int>a,int n)
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
			}
		}
		if(pos!=i)
		{
			swap(a[pos],a[i]);
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
	cout<<"\nThe number of swaps are :"<<count<<endl;
}

void insertion(vector<int>a,int n)
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

int linear(vector<int>a,int n,int key)
{
	for(int i=0;i<n;i++)
		if(a[i]==key)
			return i;
		return -1;
}


 
int main() 
{
	vector<int>a;
	int n,input,key;
	cout<<"\nEnter the size";
	cin>>n;
	cout<<"\nEnter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>input;
		a.push_back(input);
	}

	cout<<"\nLinear Search :";
	cout<<"\nEnter the key :";
	cin>>key;
	int a1=linear(a,n,key);
	cout<<"\nThe index is :"<<a1<<endl;


	cout<<"\nBubble Sort :";
	bubble(a,n);

	cout<<"\nSelection Sort :";
	selection(a,n);


	cout<<"\nInsertion Sort :";
	insertion(a,n);

	return 0;
}