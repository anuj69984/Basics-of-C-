#include <iostream>
#include <string>
using namespace std;


int main(){

	cout <<"********* 2-D array *************"<<endl;

	int x[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cout <<" Enter the array element x["<<i<<"]["<<j<<"]"<<" : ";
			cin>>x[i][j];
		}
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout <<"array element x["<<i<<"]["<<j<<"]"<<"is : "<<x[i][j]<<endl; 
		}
	}
	
	cout <<"********* 3-D array *************"<<endl;

	int y[2][3][4];
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				cout <<"Enter array element y["<<i<<"]["<<j<<"]["<<k<<"] : ";
				cin>>y[i][j][k];
			}
		}
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				cout <<"array element y["<<i<<"]["<<j<<"]["<<k<<"] is : "<<y[i][j][k]<<endl;
			}
		}
	}
	return 0;
}