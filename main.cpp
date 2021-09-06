#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* start=NULL;
node* start1=NULL;
int sum=0;
void insert(int x)
{
    node *t;
    node* temp= new node();
    temp->data=x;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else   
    {
         t=start;
       while(t->next!=NULL)
      {
          t=t->next;
      }
       t->next=temp;
    }
}
void insert1(int y)
{
    node *t2;
    node* temp1= new node();
    temp1->data=y;
    temp1->next=NULL;
    if(start1==NULL)
    {
        start1=temp1;
    }
    else   
    {
         t2=start1;
       while(t2->next!=NULL)
      {
          t2=t2->next;
      }
       t2->next=temp1;
    }
}
 void display()
{ 
    cout << "Output" << endl;
    node* t=NULL;
    t=start;
      while(t!=NULL)
    {
        cout << t->data << " "; 
        t=t->next;
    }
}
 void del(int l)
{
    node* t;
    node* t1;
    int y,i;
    t=start;
    cin >> l;
    for(i=0;i<l;i++)
    {
        if((t->data)==l)
        {
           break; 
        }
        t=t->next;
        sum++;
    }
    t1=t->next;
    t=start;
    for(i=1;i<sum;i++)
    {
        t=t->next;
    }
    t->next=t1;
}
void merge()
{
    int n1,n2,i,x,y;
    node* t3;
    cout << "Enter quantity of numbers in the list 1" << endl;
    cin >> n1;
    cout << "Enter numbers" << endl;
    for(i=0;i<n1;i++)
    {
        cin >> x; 
        insert(x);
    }
    cout << "Enter quantity of numbers in the list 2" << endl;
    cin >> n2;
    cout << "Enter numbers" << endl;
    for(i=0;i<n2;i++)
    {
        cin >> y;
        insert1(y);
    }
    t3=start;
    while(t3->next!=NULL)
    {
        t3=t3->next;
    }
    t3->next=start1;
}
void sort()
{
    node* t=start;
    node* t2=NULL;
    while(t!=NULL)
    {
        t2=t->next;
        while(t2!=NULL)
        {
            if(t->data>t2->data)
            {
                int temp;
                temp=t->data;
                t->data=t2->data;
                t2->data=temp;
            }
            t2=t2->next;
        }
        t=t->next;
    }
}
void emptylist()
{
    if(start!=NULL)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True" << endl;
    }
}
int main() {
	int n,x,l,i,m;
	cout << "Type 1 for delete" << endl; 
	cout << "Type 2 for merge" << endl;
	cin >> n;
	if(n==1)
	{
	    cout << "Enter quantity of numbers in the list" << endl;
	    cin >> l;
	    cout << "Enter numbers" << endl;
	    for(i=0;i<l;i++)
	    {
	        cin >> x;
	        insert(x);
	    }
	    cout << "Type the number to be deleted" << endl;
	    del(l);
	    emptylist();
	    display();
	}
	if(n==2)
	{
	    merge();
	    sort();
	    emptylist();
	    display();
	}
	return 0;
}

