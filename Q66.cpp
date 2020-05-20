//Operations on Doubly Linked List
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *prevnode;
	node *nextnode;
}*start=NULL,*end=NULL,*newnode,*temp;
class Doublyll
{
	int n;
	public:
		Doublyll()
	    {
		    n=0;
	    }
		void getnode();
		void traverse();
		void isempty();
		void insertatfirst();
		void insertatlast();
		void insertatpos();
		void deleteatfirst();
		void deleteatlast();
		void deleteatpos();
};
void Doublyll::getnode()
{
	newnode=new node;
	cout<<"Enter the item\n";
	cin>>newnode->data;
	newnode->nextnode=NULL;
	newnode->prevnode=NULL;
}
void Doublyll::traverse()
{
	temp=start;
	cout<<"Items are\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->nextnode;
	}
}
void Doublyll::isempty()
{
	cout<<"List is empty\n";
	getnode();
	start=newnode;
	end=newnode;
	n++;
	traverse();
}
void Doublyll::insertatfirst()
{
	if(n==0)
	isempty();
	else
	{
		getnode();
		newnode->nextnode=start;
		start->prevnode=newnode;
		start=newnode;
		n++;
		traverse();
	}
	
}
void Doublyll::insertatlast()
{
	if(n==0)
	isempty();
	else
	{
		getnode();
		end->nextnode=newnode;
		newnode->prevnode=end;
		end=newnode;
		n++;
		traverse();
	}
}
void Doublyll::insertatpos()
{
	if(n==0)
	cout<<"No insertion\n";
	else
	{
		int pos;
	    cout<<"Enter a position\n";
	    cin>>pos;
	    if(pos>1 && pos<=n)
	    {
	    	if(pos>n/2)
	    	{
	    		temp=end;
		        for(int i=n;i>=pos+1;i--)
		        temp=temp->prevnode;
		        getnode();
		        newnode->nextnode=temp;
		        newnode->prevnode=temp->prevnode;
		        temp->prevnode->nextnode=newnode;
		        temp->prevnode=newnode;
		        n++;
		        traverse();
			}
			else
			{
				temp=start;
		        for(int i=1;i<pos-1;i++)
		        temp=temp->nextnode;
		        getnode();
		        newnode->nextnode=temp->nextnode;
		        newnode->prevnode=temp;
		        temp->nextnode->prevnode=newnode;
		        temp->nextnode=newnode;
		        n++;
		        traverse();
			}
	    }
	    else
	    cout<<"Invalid position";
	}
}
void Doublyll::deleteatfirst()
{
	if(n==0)
	cout<<"cannot delete\n";
	else
	{
		if(n==1)
		{
			start=NULL;
			end=NULL;
			n--;
			cout<<"list is empty";
		}
		else
		{
			start=start->nextnode;
			start->prevnode=NULL;
			n--;
			traverse();
		}
	}
}
void Doublyll::deleteatlast()
{
	if(n==0)
	cout<<"cannot delete\n";
	else
	{
		if(n==1)
		{
			start=NULL;
			end=NULL;
			n--;
			cout<<"list is empty";
		}
		else
		{
			end=end->prevnode;
			end->nextnode=NULL;
	        n--;
	        traverse();
		}
	}
}
void Doublyll::deleteatpos()
{
	if(n==0)
	cout<<"cannot delete\n";
	else
	{
		if(n==1)
		{
			start=NULL;
			end=NULL;
			n--;
			cout<<"empty";
		}
		else
		{
			int pos;
	        cout<<"Enter a position\n";
	        cin>>pos;
	        if(pos>1&&pos<n)
	        {   
	        	if(pos>n/2)
	    	    {
	    		    temp=end;
		            for(int i=n;i>pos;i--)
		            temp=temp->prevnode;
		            temp->prevnode->nextnode=temp->nextnode;
		            temp->nextnode->prevnode=temp->prevnode;
		            n--;
		            traverse();
			    }
			    else
			    {
				    temp=start;
		            for(int i=1;i<pos;i++)
		            temp=temp->nextnode;
		            temp->prevnode->nextnode=temp->nextnode;
		            temp->nextnode->prevnode=temp->prevnode;
		            n--;
		            traverse();
			    }
	        }
	        else
	        cout<<"Invalid position\n";
		}
	}
}
main()
{
	Doublyll obj;
	int ch,z;
	do
	{
		cout<<"Press 1 to insert at first\n";
		cout<<"Press 2 to insert at last\n";
		cout<<"Press 3 to insert at position\n";
		cout<<"Press 4 to delete at first\n";
		cout<<"Press 5 to delete at last\n";
		cout<<"Press 6 to delete at position\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1: obj.insertatfirst();
			break;
			case 2: obj.insertatlast();
			break;
			case 3: obj.insertatpos();
			break;
			case 4: obj.deleteatfirst();
			break;
			case 5: obj.deleteatlast();
			break;
			case 6: obj.deleteatpos();
			break;
			default:cout<<"Invalid Choice\n";
			break;
		}
		cout<<"\npress 0 to continue\n";
		cin>>z;
	}while(z!=0);
}
