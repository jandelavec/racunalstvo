#include <iostream>
#include <cstdlib>
#include <vector> 

using namespace std;

int main() 
{
	int z;
	int c = 1;
	int x, y;
	vector<int> t;

	while(z!=0)
	{
		cout<<"Unesi "<<c<<". broj: ";
		cin>>z;
		t.push_back(z);
		c++;
	}
	
	cout<<endl;
	
	cout << "Ponavljaju se: ";
	for (x = 0;  x<t.size(); x++)
		for (y=x+1;  y<t.size(); y++)
			if (t[x]==t[y])
				cout<<t[y]<<", ";
	cout<<endl;	
	
	system("pause");
	return 0;
}
