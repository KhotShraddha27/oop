#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int arr[] = {5,9,3,0,2,8};
	vector<int> v(arr, arr+sizeof(arr)/sizeof(int));
	int c;
	sort(v.begin(),v.end());
	cout<<"Sorted list : ";
	for(c=0; c<v.size(); c++)
		cout<<v[c]<<" ";
	return 0;
}
