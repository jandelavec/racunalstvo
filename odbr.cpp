#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
	int x, t;
	cout<<"Upisi vrijeme u sekundama: ";
	cin>>x;
	cout<<endl;
	for(t=x; t>=0; t--)
		{
		cout<<t<<endl;
		Sleep(1000);
		} 
	
	system("pause");
	return 0;
}
