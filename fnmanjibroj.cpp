#include <cstdlib>
#include <iostream>

using namespace std;



int ispit(int a, int b)
{
      int c;
      if(a<b)
             c = a;
      else if(b<a)
             c = b;
      return c;
}

int main()
{
    int a, b;
    cout<<"Upisi prvi broj: ";
    cin>>a;
    cout<<"Upisi drugi broj: ";
    cin>>b;
    
    int x = ispit(a, b);
    cout<<"Manji broj je "<<x<<endl;
 
 
    system("PAUSE");
    return 0;
}
