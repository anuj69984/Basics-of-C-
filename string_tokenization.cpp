#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
using namespace std;


int main(){
	char str[]="Hi, My name is Khan";
	char *tokens;
	tokens=strtok(str," ");
	// cout<<tokens<<endl;

	// tokens=strtok(NULL," ");
	// cout<<tokens<<endl;

	while(tokens !=NULL){
		cout<<tokens<<endl;
		tokens=strtok(NULL," ");
	}
	return 0;	
}


// int main()
// {
     
//     string str = "GeeksForGeeks is a must try";
     
//     // Vector of string to save tokens
//     vector <string> tokens;
     
//     // stringstream class check1
//     stringstream check1(str);
     
//     string intermediate;
     
//     // Tokenizing w.r.t. space ' '
//     while(getline(check1, intermediate, ' '))
//     {
//         tokens.push_back(intermediate);
//     }
     
//     // Printing the token vector
//     for(int i = 0; i < tokens.size(); i++)
//         cout << tokens[i] << '\n';
// }
