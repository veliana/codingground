#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"x=";
    double x;
    cin>>x;
    bool b;
    b = x < ceil(x);
    cout<<"x=";
    cin>>x;
    b = b && ( x < floor(x) );
    cout<<"b= "<<b<<"\n";
    return 0;
    
 
}
