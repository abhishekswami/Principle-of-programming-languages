Write a program to check whether a number is even or odd using ternary operator.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    (n%2==0)?cout<<n<<" is even ":cout<<n<<" is odd ";
    return 0;
}
