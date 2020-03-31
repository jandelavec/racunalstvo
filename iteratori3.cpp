#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	string x;
	cout<<"Unesite recenicu: ";
	getline(cin, x);
	
	string::iterator y = x.begin()+1;
	string::iterator z = x.end()-1;
	
	x.erase(y, z);

	cout<<endl<<x<<endl<<endl;
	
	
	system("pause");
	return 0;
}
