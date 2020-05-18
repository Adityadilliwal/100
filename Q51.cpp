//compare two structre variables
#include<iostream>
using namespace std;
void comp(int a,int b)
{
	if(a==b)
	cout<<"Similar";
	else
	cout<<"Not similar";
}
struct a
{
	int x;
};
struct b
{
	int y;
};
main()
{
	a s1;
	b s2;
	s1.x=60;
	s2.y=69;
	comp(s1.x,s2.y);
}
