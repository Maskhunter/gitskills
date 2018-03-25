#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int num=2;
int main()
{
	vector<double>price(num);
	vector<string>book(num);
	cout<<"input start"<<num<<"book data"<<endl;
	for (int i=0;i<num;i++)
	{
		cout<<"please input No."<<i+1<<"book name:";
		getline(cin,book[i]);
		cout<<"book price:";
		cin>>price[i];
		cin.ignore();
	}

	for (int i=0;i<num;i++)
	{
		cout<<"No."<<i+1<<"book name:";
		cout<<book[i]<<"\t"<<"price:"<<price[i]<<endl;
	}
	return 0;
}
