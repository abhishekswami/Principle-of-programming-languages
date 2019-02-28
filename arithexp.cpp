Name of Program-3: Write a program to evaluate the arithmetic expression ((a + b / c * d - e) * (f - g)). Read the values a, b, c, d, e, f, g from the standard input device.
#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g,h;
    cout<<"Enter numbers to calculate value of ((a + b / c * d - e) * (f - g)) expression ";
    cout<<"\nEnter a,b,c,d,e,f,g,h in order";
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    float A=a+b;
    float B=c+d-e;
    float C=f-g;
    float D=A/B;
    float result= D*C;
    cout<<"\n Result of expression is: "<<result;
    return 0;
}
