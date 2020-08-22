#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>


using namespace std;
typedef long long int ll;


struct myclass{
			int operator()(int a)  {return a;}
			int operator()(int a,int b){return a+b;}
};



int main()
{


	myclass myobj;
	int x = myobj(10);
	int a = myobj(10,30);

	cout<<"The Value for X is  : "<<x<<endl;
	cout<<"The Value for a is  : "<<a<<endl;

	return 0;
}