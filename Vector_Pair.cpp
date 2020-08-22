#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;
typedef long long int ll;

bool comparefun(pair<string,int> &t1, pair<string,int> &t2)
{
	return t1.second > t2.second;
}

int main()
{
	vector<pair<string,int> > vec;
	string name;
	int age;

	int n;
	cout<<"Enter n"<<endl;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>name;
		cin>>age;
		vec.push_back(make_pair(name,age));
	}

	vector<pair<string,int> >:: iterator it=vec.begin();


	for(;it!=vec.end();it++)
	{
		cout<<it->first<<"  --- > "<<it->second<<endl;
	}

	cout<<"Vector After Sorting with Respect to age"<<endl;

	sort(vec.begin(),vec.end(),comparefun);

	it = vec.begin();

	for(;it!=vec.end();it++)
	{
		cout<<it->first<<"  --- > "<<it->second<<endl;
	}



return 0;
}