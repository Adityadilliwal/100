//Operations on Singly Linked List
#include<iostream>
using namespace std;
int n=0;
struct node
{
	public:
	int data,n,pos;
	node *nextnode;	
};
node *newnode,*start=NULL,*end=NULL,*temp;
void getnode()
{
	newnode=new node;
	cout<<"Enter element"<<endl; 
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
void traverse()
{  
	temp=start;
	while(temp!=NULL)
	{
		cout<<temp->data;
		cout<<endl;
		temp=temp->nextnode;
	}
}
void iemptylist()
{
	getnode();
	start=newnode;
	end=newnode;
	n++;
}
void insertatfirst()
{
	getnode();
	newnode->nextnode=start;
	start=newnode;
	n++;
}
void insertatlast()
{
	getnode();
	end->nextnode=newnode;
	end=newnode;
	n++;
}
void insertatposition()
{
	int pos;
	cout<<"Enter position"<<endl;
	cin>>pos;
	if(pos>=1 && pos<=n+1)
	{
		getnode();
		node*temp;
		temp=start;
		for(int i=pos;i<=pos-2;i++)
		temp=temp->nextnode;
		newnode->nextnode=temp->nextnode;
		temp->nextnode=newnode;
		n++;
	}
	else
	if(pos<1||pos>n+1)
	cout<<"Invalid position";
}

void deletefromfirst()
{
	start=start->nextnode;
	n--;
}
void deletefromlast()
{
	while(temp->nextnode!=end)
	{
		temp=temp->nextnode;
    }
		temp->nextnode=NULL;
		end=temp;
		n--;	
}
void deletefromposition()
{
	int pos;
	cout<<"Enter position"<<endl;
	cin>>pos;
	temp=start;
	for(int i=1;i<=pos-2;i++)
	temp=temp->nextnode;
	temp->nextnode=temp->nextnode->nextnode;
	n--;
}
main()
{
	int choice,choice1;
	do
	{
	   if (start==NULL) iemptylist();
	   else
	   {
	   	   cout<<"1) Enter 1 to insert at first "<<endl;
	   	   cout<<"2) Enter 2 to insert at last "<<endl;
	   	   cout<<"3) Enter 3 to insert at position "<<endl;
	   	   cout<<"4) Enter 4 to delete from first "<<endl;
	   	   cout<<"5) Enter 5 to delete from last "<<endl;
	   	   cout<<"6) Enter 6 to delete from position "<<endl;
	   	   cin>>choice;
	   	   if(choice==1) 
			{
		    	insertatfirst();
				cout<<endl; 
				traverse();
		    }
	   	   else if(choice==2) 
			  {
			  	insertatlast();
			  	cout<<endl;
			  	traverse();
		      }
	   	   else if(choice==3) 
			  {
			  	insertatposition();
			  	cout<<endl;
			  	traverse();
	          }
	          else if(choice==4) 
			  {
			  	deletefromfirst();
			  	cout<<endl;
			  	traverse();
	          }
	          else if(choice==5) 
			  {
			  	deletefromlast();
			  	cout<<endl;
			  	traverse();
	          }
	          else if(choice==6) 
			  {
			  	deletefromposition();
			  	cout<<endl;
			  	traverse();
	          }
	   	   else cout<<"Wrong choice"<<endl;
	   }	
	   cout<<"Press 0 to continue"<<endl; 
	   cin>>choice1;
	}
	while(choice1==0);
}
