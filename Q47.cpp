//Storing Student information using  Structure 
#include<iostream>
using namespace std;
struct Student 
{
	int sno;
	string sname;
	float marks;
	
};
int main()
{
	int n;
	float sum=0,avg;
	cout<<"total students\n";
	cin>>n;
	struct Student s[n];
	cout<<"enter sno,sname,marks of student\n";
	for(int i=0;i<n;i++)
	{
		cin>>s[i].sno>>s[i].sname>>s[i].marks;
		sum=sum+s[i].marks;
	}
	avg=sum/n;
	cout<<"Avg marks: "<<avg;
	cout<<"\nsno\nname\nmarks\n";
	for(int i=0;i<n;i++)
	if(s[i].marks>=avg)
	cout<<s[i].sno<<"\n"<<s[i].sname<<"\n"<<s[i].marks;	
}
