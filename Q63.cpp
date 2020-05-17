//Stack operations on a Linked List
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node 
{ 
   int data; 
   struct Node *next; 
}; 
struct Node* top=NULL; 
int push(int ele) 
{
   struct Node* newnode=(struct Node*)malloc(sizeof(struct Node)); 
   newnode->data=ele; 
   newnode->next=top; 
   top=newnode; 
}
int pop() 
{
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else 
   {
      cout<<"POp is: "<<top->data<<endl;
      top=top->next;
   }
}
int display() 
{
   struct Node* ptr;
   if(top==NULL)
      cout<<"stack is empty";
   else 
   {   
      ptr=top; 
      cout<<"Stack elements are: ";
      while(ptr!= NULL) 
	  { 
         cout<<ptr->data<<" "; 
         ptr=ptr->next; 
      } 
   }
}
int main()
{
   int ch,ele; 
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do 
   {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) 
	  {
         case 1: 
		 {   
            cout<<"Enter element to be pushed:"<<endl;
            cin>>ele;
            push(ele);
            break;
         }
         case 2: 
		 {
            pop();
            break;
         }
         case 3: 
		 {
            display();
            break;
         }
         case 4: 
		 {
            cout<<"Exit"<<endl;
            break;
         }
         default: 
		 {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   while(ch!=4); 
      return 0;
}  
