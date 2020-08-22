#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<set>
#include<map>



using namespace std;
typedef long long int ll;

int main()
{
	
	//Constructors of Vector
	int arr[] = {6,3,2,1,90,84,100};
	vector<int> vec1 = {1,2,3,4,5,6,89,3,2,12};
	vector<int> vec(10,5);
	vector<int> vec2(arr+1,arr+6);
	vector<int> copy(vec1.begin()+1,vec1.end());

	vector<int> foo(5,10);
	vector<int> bar(9,2);

	//vec1 = vector<int>();
	foo.resize(15,100);

	foo;
	cout<<"Size of foo  :  "<<foo.size()<<endl;
	cout<<"Size of bar  :  "<<bar.size()<<endl;







	cout<<"Max Size of FOO "<<foo.max_size()<<endl;
	cout<<"Capacity of FOO "<<foo.capacity()<<endl;

	for(vector<int>::iterator it = foo.begin();it!=foo.end();it++)
	{
		cout<<*it<<" ";
	}







	cout<<"Size of V2 : "<<vec1.size()<<endl;

	for(int i=0;i<copy.size();i++)
	{
		cout<<copy[i]<<" ";
	}



return 0;
}


