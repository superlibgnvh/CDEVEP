#include <iostream>
void simple();
int bigger(int a, int b);
double cube( double x);
int main()
{
    using namespace std;
    int aa;
    int bb;
    // int BiggerValue;
    cout <<"The main() function will call the simple() function.\n";
    simple();
    cout << "Please input a and b for bigger function.\n";
    cin >>aa;
    cin >>bb;
    int BiggerValue = bigger(aa, bb);
    cout << "The bigger value is :" <<BiggerValue <<"\n";
    double side;
    cout <<"Please input side size.\n";
    cin >>side;
    double volume = cube(side);
    cout <<"The volume is : " <<volume <<"\n";
    return 0;
}

void simple()
{
    using namespace std;
    cout <<"I am but a simple function.\n";
}

int bigger(int a, int b)
{
    using namespace std;
    if (a >b)
        return a;
    else
        return b;
}

double cube( double x)
{
    return x*x*x;
}