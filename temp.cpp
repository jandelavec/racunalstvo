#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	float t;
	cout<<"Temperatura = ";
	cin>>t;
	
	if(t>=24.5)
		cout<<"Toplo\n";
	if(t<24.5)
		cout<<"Hladno\n";
		
	system("pause");
	return 0;
}
