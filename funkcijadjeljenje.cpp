#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

float djeljenje(float a, float b)
{
      float c = a/b;
      return c;
}
int main()
{
    float a, b;
    cout<<"Upisi prvi broj: ";
    cin>>a;
    cout<<endl;
    cout<<"Upisi drugi broj: ";
    cin>>b;
    cout<<endl;
    
    float x = djeljenje(a, b);
    cout<<a<<" : "<<b<<" = "<<x<<endl;
    
    system("pause");
    return 0;
}
