// #include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int main(){
	map<string,int> s;
	s["Anuj"]=624387;
	s["Aman"]=634282;
	s["Gadsa"]=47829;

	s.insert(make_pair("Rahul",100));
	s.insert(make_pair("Ankit",812397));
	s.erase("Gadsa");	//Erase by key;

	map<string,int>::iterator it=s.begin();
	s.erase(it);	// Erase by iterator;
	for(it=s.begin();it!=s.end();it++) //point to start key again bcz previous key was deleted.
		cout<<it->first<<","<<it->second<<endl;

	if(s.find("Anuj") !=s.end())
		cout<<"Key found"<<endl;
	else
		cout<<"key not found"<<endl;

	return 0;
}
/*
int main(){
	map<int,int> s;
	s[5]=90;
	s.insert(make_pair(1,40));
	s.insert(make_pair(2,50));
	s.insert(make_pair(3,10));

	s.erase(1);

	map<int,int>::iterator it=s.begin();
	for(it;it !=s.end();it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}

	if(s.find(3) !=s.end()){
		cout<<"key found"<<endl;
	}
	else
		cout<<"key not found"<<endl;
	return 0;
}
*/