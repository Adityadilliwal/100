//Stack operations on an array
#include<iostream>
using namespace std;
#define Max 8
class Stack
{
    int a[Max];
    public: 
       int top,bottom;
       Stack(){ top=-1; bottom=0;}
	void Traverse();
	void push();
	void pop();
		
};
void Stack::push()
{ int item;

	if (top==Max-1)
	{
		cout<<"Item not allowed";	
	}
	else
cout<<"enter item to be push:\n";
	cin>>item;
  a[++top]=item;
 Traverse();

}
void Stack::Traverse()
{
	int i=top;
	cout<<"Stack is\n";
	while(i>=0)
	{
		cout<<a[i]<<"\t";
		i--;
	}
}
void Stack::pop()
{
	if(top==-1)
	{
	  cout<<"Stack is empty\n";
	}
else
top--;
	Traverse();
	
}

int main()
{  Stack S;
  int choice,ch;
  do{
  	
  	cout<<"1.push\n";
  	cout<<"2.pop \n";
  	cin>>choice;
  	if (choice==1)
  	 S.push();
  	 else if(choice==2)
  	 S.pop();
  	 else cout<<"Wrong input\n";
	cout<<"Press 0 to continue \n";
	cin>>ch;
  }while(ch==0);
  
}
