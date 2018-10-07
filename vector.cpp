#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void fillvector(vector<int>&);
void printvector(vector<int>&);
void replace(vector<int>&);
void reversevector(vector<int>&);
int main(){
	vector <int> myVector;
	myVector.push_back(6);
	myVector.push_back(5);
	myVector.push_back(12);
	myVector.push_back(134);

	for (int i = 0; i < myVector.size(); ++i)
		{
			cout<<myVector[i]<<" ";
		}	
		cout<<endl;

	myVector.clear();
	for (int i = 0; i < myVector.size(); ++i)
		{
			cout<<myVector[i]<<" ";
		}
		cout<<endl;

	if (myVector.empty())
		{
			cout<<"Is Empty"<<endl;
		}
	else
			cout<<"Is Not Empty"<<endl;

	myVector.insert(myVector.begin(),8);
	myVector.insert(myVector.begin(),9);
	myVector.push_back(5);
	myVector.push_back(12);
	myVector.push_back(134);
	for (int i = 0; i < myVector.size(); ++i)
		{
			cout<<myVector.at(i)<<" ";

		}	
		cout<<endl;

	myVector.erase(myVector.begin());
	myVector.erase(myVector.begin()+1);
	for (int i = 0; i < myVector.size(); ++i)
		{
			cout<<myVector[i]<<" ";
		}	

		cout<<endl;

	fillvector(myVector);
	printvector(myVector);
	replace(myVector);
	printvector(myVector);
	// reverse(myVector.begin(),myVector.end());
	reversevector(myVector);
	printvector(myVector);
}



void fillvector(vector<int>& newvector){
	cout<<"Press -1 to stop "<<endl;
	int input;
	cout<<"Enter the input : ";
	cin>>input;
	while (input !=-1)
	{
		newvector.push_back(input);
		cout<<"Enter the input : ";
		cin>>input;
	}
}

void printvector(vector<int>& newvector){
	cout<<"Printing the vector elements : ";
	for (int i = 0; i < newvector.size(); ++i)
	{
		cout<<newvector[i]<<" ";
	}
	cout<<endl;
}

void replace(vector<int>& newvector){
	int old,replace;
	cout<<"Enter the element to be replaced : ";
	cin>>old;
	cout<<"Enter the new element : ";
	cin>>replace;

	for (int i = 0; i < newvector.size(); ++i)
	{
		if (newvector[i]==old)
		{
			newvector[i]=replace;
		}
	}
}

void reversevector(vector<int>& newvector){
	reverse(newvector.begin(),newvector.end());
}