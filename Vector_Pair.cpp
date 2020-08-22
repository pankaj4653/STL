#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<utility>



using namespace std;
typedef long long int ll;

bool compare(pair<string,pair<int,int> > &t1, pair<string,pair<int,int> > &t2)
{
	return t1.second.second > t2.second.second;
}

// bool compare(pair<string,pair<int,int> > &v1, pair<string,pair<int,int> > &v2 )
// {
// 	return v1.second.first< v2.second.first;
// }

int main()
{
	vector<pair<string,pair<int,int> > > vec;
	string name;                                  
	int age,height;


	int n;
	cout<<"Enter n"<<endl;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>name;
		cin>>age;
		cin>>height;

		vec.push_back(make_pair(name,make_pair(age,height)));
	}

	//vector<pair<string,pair<int,int> > > :: iterator it=vec.begin();


	for(auto it=vec.begin();it!=vec.end();it++)
	{
		cout<<it->first<<"  --- > "<<it->second.first<<"----->"<<it->second.second<<endl;
	}

	cout<<"Vector After Sorting with Respect to age"<<endl;

	 sort(vec.begin(),vec.end(),compare);

	// it = vec.begin();

	for(auto it=vec.begin();it!=vec.end();it++)
	{
		cout<<it->first<<"  --- > "<<(*it).second.first<<"----->"<<(*it).second.second<<endl;
	}



return 0;
}