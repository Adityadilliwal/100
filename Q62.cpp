//Queue operations in an array
#include<iostream>
using namespace std;
#define Max 6
class Queue
{
	int Q[Max];
	public:
		int front,rear,n;
		Queue(){front=0;rear=0;n=0;}
		void Traverse();
		void Enqueue(int);
		void Dequeue();
};
void Queue::Enqueue(int item)
{	
	if(rear==Max)cout<<"Queue is overflow\n";
	else
	{
	Q[rear]=item;
	rear++;
	n++;
	}
	
}
void Queue::Traverse()
{
cout<<"Elements of Queue are:"<<"\n";
for(int i=front;i<=rear-1;i++)
cout<<Q[i]<<endl;
}
void Queue::Dequeue()
{
	int temp;
	if(front==rear)cout<<"Queue is underflow\n";
	else{
	temp=Q[front];
	front++;
		}
}
main()
{
	Queue obj;
	int choice,ch2,item;

	do
	{
		cout<<"1 to insert elements\n"<<endl;
		cout<<"2 to delete elements\n"<<endl;
		cout<<"Enter your choice\n"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{cout<<"Enter itme to insert"<<"\n";
				cin>>item;
					obj.Enqueue(item);
					obj.Traverse();
				}break;
			case 2:
				{
					obj.Dequeue();
					obj.Traverse();
				}break;
			default:cout<<"choice is invalid"<<endl;
		}
		cout<<"press 0 to continue\n";
		cin>>ch2;
	}
	while(ch2==0);
return 0;
}

