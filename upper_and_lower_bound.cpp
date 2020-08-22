#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long int ll;

int main()
{
	cout<<"Working on vector"<<endl;
	int n, x;
	cout<<"Enter the Number of Elements in Vector"<<endl;
	cin>>n;
	vector<int> vec;

	vec = vector<int>();
	cout<<"Size of Vec : "<<vec.size()<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		vec.push_back(x);
	}

	cout<<"Displaying the elements of the vector"<<endl;

	for(int i=0;i<n;i++)
		cout<<vec[i]<<" ";
	

	sort(vec.begin(),vec.end(),greater<int>());

	cout<<"Displaying the elements after sorting"<<endl;

	for(int i=0;i<n;i++)
		cout<<vec[i]<<" ";




return 0;

}