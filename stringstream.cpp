#include <iostream>
#include <sstream>
#include <cstring>
#include <map>
using namespace std;

void frequency_of_words(string str){
	stringstream s(str);
	string word;

	map<string,int> m;
	while(s >> word){
		m[word]++;
	} 

	map<string,int>::iterator it=m.begin();
	for(it;it !=m.end();it++){
		cout<<it->first<<"-"<<it->second<<endl;
	}
}

void string_to_integer(string str){
	stringstream sso;
	sso << str;
	int num;
	sso >> num;
	cout<<"String "<<str<<" is converted to integer "<<num<<endl;
}

void integer_to_string(int n){
	stringstream sso;
	sso << n;
	string str;
	sso >> str;
	cout<<"integer  "<<n<<" is converted to string "<<str<<endl;
}

int countword(string str){
	stringstream s(str);	// Breaks the word
	string word;
	int count=0;
	while(s >> word){
		count++;
	}
	return count;
}

int main(){
	int num;
	cout<<"Enter an Integer : ";
	cin>>num;
	cin.ignore(); // else getline() will not take any input.
	string str;
	cout<<"Enter an string : ";
	getline(cin,str);
	
	int l=countword(str);
	cout<<"number of words in str is : "<<l<<endl;
	integer_to_string(num);
	string_to_integer(str);
	frequency_of_words(str);

	return 0;

}