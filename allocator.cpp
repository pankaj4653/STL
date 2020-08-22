#include<iostream>
#include<memory>
using namespace std;

int main()
{
	allocator<int> myallocate;

	int *arr = myallocate.allocate(5);
	myallocate.construct(arr,3);
	myallocate.construct(arr+1,4);

	arr[3]=0;
	cout<<"arr[0] : "<<arr[0]<<endl;
	cout<<"arr[1] : "<<arr[1]<<endl;
	cout<<"arr[3] : "<<arr[3]<<endl;


	cout<<"Address : "<<myallocate.address(arr);


	myallocate.destroy(arr);
	myallocate.destroy(arr+1);

	

	return 0;


}

