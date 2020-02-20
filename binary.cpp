#include <bits/stdc++.h>
using namespace std;

int binary(vector<int>a,int l,int r,int key)
 { 
 	
   if (l<=r) 
   { 
      int mid=(l+r)/2; 
      if(a[mid]==key)   
         return mid ; 
      else if(a[mid]>key)  
         return binary(a,l,mid-1,key);            
      else
         return binary(a,mid+1,r,key); 
   } 
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

   cout<<"\nBinary Search :";
   cout<<"\nEnter the key :";
   cin>>key;
   int a1=binary(a,0,n-1,key);
   cout<<"\nThe index is :"<<a1<<endl;

   return 0;
}