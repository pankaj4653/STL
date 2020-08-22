#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<utility>
#include<string>

using namespace std;
typedef long long int ll;


// template<typename T1, typename T2>
// 	pair<T1,T2> make_pair(T1 x, T2 y);


// template<class T1, class T2>
// pair<T1,T2> make_pair(T1 x, T2 y)
// {
// 	return pair<T1,T2>(x,y);
// }


int main()
{
	pair<int,int> foo;
	pair<string,int> bar;

	foo = make_pair(10,20);
	bar = make_pair("Pakaj",39);


	cout<<"foo Object : "<<bar.first<<" ---- > "<<bar.second<<endl;

	bar.first = "Kumar";

	cout<<"foo Object : "<<bar.first<<" ---- > "<<bar.second<<endl;

return 0;
}