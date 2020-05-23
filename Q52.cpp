//Copy contents of one student to another
#include<iostream>
using namespace std;
struct Student
{
	int rollno,marks;
}s1,s2;
Student copy(Student x)
{
	s2.rollno=x.rollno;
	s2.marks=x.marks;
}
main()
{
	cout<<"Enter rollno & marks of student1: \n";
	cin>>s1.rollno>>s1.marks;
	copy(s1);
	cout<<"Student details copied\n";
	cout<<"Student2 rollno: "<<s2.rollno<<"\t"<<"marks: "<<s2.marks;
}
