#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	string x;
	int c = 0;
	getline(cin, x);
	
	for(int i = 0; i<=x.length(); i++)
	{
		if(x[i]==' '||x[i]=='.'||x[i]=='?'||x[i]=='!')
		c++;
	
	    if(x[i]!=' ')
			cout<<x[i];
		else if(x[i]==' ')
			cout<<", ";	
	}
	cout<<endl;
	cout<<"Recenica ima "<<c<<" rijeci.\n";
	cout<<endl;
	
	system("pause");
	return 0;
}
