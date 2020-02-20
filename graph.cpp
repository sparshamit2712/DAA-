#include<iostream>
using namespace std;

struct graph{
    int dest;
    graph *next;
};
int visit[20];
graph *source[20]={NULL};

graph *insert(graph *source,int dest)
{
    graph *p=new graph;
    p->dest=dest;
    p->next=NULL;

    if(source==NULL)
    {
        source=p;
    }
    else
    {
        graph *temp=new graph;
        temp=source;
        p->next=temp;
        source=p;
    }
    return source;
}

void display(graph *source)
{
    while(source!=NULL)
    {
        cout<<source->dest<<" ";
        source=source->next;
    }
    cout<<endl;
}

void dfs(int i)
{
    graph *p;
    cout<<i<<endl;
    p=source[i];
    visit[i]=1;
    while(p!=NULL)
    {
        i=p->dest;
        if(!visit[i])
        {
            dfs(i);
        }
        p=p->next;
    }
}

int main()
{
    int node,edge,src,dest;
    cout<<"\nEnter the number of nodes and the number of edges\n";
    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        cout<<"Enter the Source Node and Destination Node\n";
        cin>>src>>dest;
        source[src]=insert(source[src],dest);
    }

    cout<<"Source\t\tEdge"<<endl;
    for(int i=1;i<=node;i++)
    {
        cout<<"source["<<i<<"]\t";
        display(source[i]);
    }

    
    for(int i=0;i<node;i++)
    {
        visit[i]=0;
    }
    cout<<"Depth First Search Traversal is"<<endl;
    dfs(1);
    return 0;
}