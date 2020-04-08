#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int x;
	vector<int> y;
	
	cout<<"Unesi par brojeva: "<<endl;
	while(x!=0)
	{
		cin>>x;
		y.push_back(x);
	}
	cout<<endl;
	for(int i = 0; y[i]; i++)
		cout<<y[i]<<"  ";
	cout<<"0"<<endl;

	cout<<endl<<"Velicina vektora: "<<y.size()<<" brojeva"<<endl;
	cout<<"Kapacitet vektora: "<<y.capacity()<<endl;
	
	
	
	
	system("pause");
	return 0;
}
