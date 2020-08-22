#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;
typedef long long int ll;


enum week
{
	Sunday,
	Monday,
	Tuesday=10,
	Wednesday,
	Thrusday,
	Friday,
	Saturday
};


int main()
{
	week today;
	today = Tuesday;

	cout<<"Today : "<<today<<endl;
	cout<<"Size of today : "<<sizeof(today)<<endl;


	return 0;
}
