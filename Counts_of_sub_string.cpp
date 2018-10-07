#include <iostream>
#include <string>
#include <map>
using namespace std;

// int main(){
// 	string s;
// 	cin>>s;
	
// 	for(int i=0;i<s.size();i++)
// 		cout<<s[i]<<" ";

// 	int l=s.size();
// 	for(int i=0;i<l-1;i++)
// 	{		
// 		int cnt=0;		
// 		for(int j=0;j<l-1;j++)
// 		{
// 			if(s[i]==s[j] && s[i+1]==s[j+1])
// 				cnt++;
// 		}
// 		cout<<s[i]<<s[i+1]<<"  "<<cnt<<endl;
// 	}
// 	cout<<endl;
// 	return 0;
// }

void count(string str){
	map<pair<char,char>,int> s;
	int l=str.size();
	for (int i = 0; i < l-1; ++i)
	{
		s[make_pair(str[i],str[i+1])]++;
	}

	map<pair<char,char>,int>::iterator it=s.begin();
	for(it;it !=s.end();it++){
		cout<<it->first.first<<it->first.second<<"-"<<it->second<<endl;
	}

}

int main(int argc, char const *argv[])
{
	string str="abcab";
	count(str);
	return 0;
}