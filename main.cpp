#include<fstream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include"lab3.h"
using namespace std;
int main(){
int temp[30],i,total=0,count=0;
	char ch;
	vector <int> v1;

	ifstream inFile("file.in",ios::in);
	if(!inFile){
	cerr<<"Failed opening"<<endl;
	exit(1);
	}
	while(inFile>>temp[count])
	{
	count++;}
	for(i=0;i<count-1;i++)
	{v1.push_back(temp[i+1]);
	cout<<v1[i]<<endl;
	}
	
	sort(v1.begin(),v1.end());
	for(i=7;i>2;i--)
	{total+=v1[i];}
	cout<<total<<endl;
}

