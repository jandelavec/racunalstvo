#include <iostream>
#include <cstdlib>

using namespace std;

int main() // Upisi cijeli broj razlicit od 0, program govori njegovu apsolutnu vrijednost.
{
	int x;
	cout<<"Upisi cijeli broj razlitic od 0: ";
	cin>>x;
	cout<<endl;
	
	if(x>0)
		cout<<"Njegova apsolutna vrijednost je "<<x<<endl;
	else if(x<0)
		cout<<"Njegova apsolutna vrijednost je "<<-x<<endl;
		
	system("pause");
	return 0;

}
