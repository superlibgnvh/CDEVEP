#include <iostream>
long double probaility(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total, choices;
    cout <<"Input total number and choices for card play.\n";
    while ((cin >> total >> choices) && choices <=total)
    {
        cout << "You have one chance in ";
        cout <<probaility(total, choices);
        cout <<" of winning.\n";
        cout <<"Next two numbers (q to quit): ";
        
    }
    cout <<"Bye. \n";
    return 0;  
}
long double probaility(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        /* code */
        result = result * n/p;
    }
    return 1/result;
}