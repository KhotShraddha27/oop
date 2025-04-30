#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
	map<string,string> phonebook;
	phonebook["abc"]="9423703103";
	phonebook["xyz"]="9988776655";
	
	string name;
	cout<<"Enter name : ";
	cin>>name;
	
	if(phonebook.find(name)!=phonebook.end())
		cout<<name<<": "<<phonebook[name];
	else
		cout<<"Not found";
		
	return 0;
}
