#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	
	int x = 1;
	vector<int> y;
	
	cout<<"Unesi par brojeva: "<<endl;
	while(x!=0)
	{
		cin>>x;
		y.push_back(x);
	}
	cout<<endl<<"Prije sortiranja: ";
	for(int i = 0; y[i]; i++)
		cout<<y[i]<<"  ";
	cout<<"0"<<endl;
	
	sort(y.begin(), y.end());
	cout<<"Nakon sortiranja: ";
	for (vector<int>::iterator t=y.begin(); t!=y.end(); ++t)
    	cout<<*t<<"  ";


	
	system("pause");
	return 0;
}
