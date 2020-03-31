#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	string x = "C++ je najbolji programski jezik";
	
	int c;
	
	for(string::iterator y = x.begin(); y != x.end(); y++)
	{	
		cout<<*y;		
		if(*y==' ')
		{
			cout<<endl;
			c++;
		}
	}
	cout<<endl<<endl;
	
	cout<<"Recenica ima "<<c+1<<" rijeci."<<endl<<endl;
	
	system("pause");
	return 0;
}
