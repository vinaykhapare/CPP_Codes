k#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
		void set()
		{
			cout<<"enter the name and age"<<endl;
			cin>>name>>age;
		}
};
class student:public person
{
	public:
		int id;
		string department;
		void set2(int i,string d)
		{
			id=i;
			department=d;
		}
		void display()
		{
			cout<<"NAME:"<<name<<endl;
			cout<<"AGE:"<<age<<endl;
			cout<<"ID:"<<id<<endl;
			cout<<"DEPARTMENT:"<<department<<endl;
		}
};
int main()
{
	student s1;
	s1.set();
	s1.set2(107,"cse");
	s1.display();
	return 0;
}
