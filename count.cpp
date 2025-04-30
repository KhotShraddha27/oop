#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int arr[] = {1,1,1,1,2,2,2,2,3,3,5,5,5,5,5,5,5,7,7,8,9,0};
	vector<int> v(arr, arr+sizeof(arr)/sizeof(int));
	int target;
	cout<<"Enter target : ";
	cin>>target;
	int c;
	c = count(v.begin(), v.end(), target);
	cout<<"Count : "<<c;
}
