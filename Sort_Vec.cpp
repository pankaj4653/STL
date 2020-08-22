#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<algorithm>
#include<functional>

using namespace std;
typedef long long int ll;

bool lessthan(int i,int j)
{
	return i<j;
}

bool greaterthen(int i,int j)
{
	return i>j;
}


struct myclass{
	bool operator()(int i,int j)
	{
		return i>j;
	}
}myobj;


int main()
{
		int n,x;
		cout<<"Enter n "<<endl;
		cin>>n;

		vector<int> vec;

		for(int i=0;i<n;i++)
		{
			cin>>x;
			vec.push_back(x);
		}

		sort(vec.begin(),vec.end(),myobj);

		cout<<"The Sorted Vector"<<endl;

		for(int i=0;i<n;i++)
		{
			cout<<vec[i]<<" ";
		}

		return 0;
}

