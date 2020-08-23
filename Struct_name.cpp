#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>


using namespace std;
typedef long long int ll;




struct Person
{
	string name;
	int age;
	long salary;
};

bool compare(struct Person &p1, struct Person &p2)
{
	return p1.age < p2.age;
}


int main()
{
	Person P = {"Pankaj",78,2345};

	string name1;
	int age1;
	int sal1;

	cout<<"Enter the Details of the Persion"<<endl;
	cin>>P.name;
	cin>>P.age;
	cin>>P.salary;

	
	vector<Person> vec; 
	Person P1;

	int n;
	cout<<"Enter N : "<<endl;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>P1.name;
		cin>>P1.age;
		cin>>P1.salary;

		// P1.name = name1;
		// P1.age = age1;
		// P1.salary = sal1;

		vec.push_back(P1);
		cout<<"For Loop"<<endl;
	}



	cout<<"Displaying the Data in the Vector"<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<"Name  : "<<vec[i].name<<endl;
		cout<<"Age   : "<<vec[i].age<<endl;
		cout<<"Salary: "<<vec[i].salary<<endl;
	}

	cout<<endl<<endl;

	sort(vec.begin(),vec.end(),compare);


   for(int i=0;i<n;i++)
	{
		cout<<"Name  : "<<vec[i].name<<endl;
		cout<<"Age   : "<<vec[i].age<<endl;
		cout<<"Salary: "<<vec[i].salary<<endl;
	}


	// cout<<"The Details of the Person"<<endl;

	// cout<<"Name of the Person : "<<P.name<<endl;
	// cout<<"Age of the Person :  "<<P.age<<endl;
	// cout<<"Salary of the Person :"<<P.salary<<endl;

	return 0;

}