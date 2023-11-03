#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int i;
    for (i = 0; i <5; i++)
        cout << "C++ kounws loop."  <<i <<"\n";
    cout <<"C++ knows when to stop. \n";
    //
    cout <<"Enter the starting countdown value: " <<endl;
    int limit = 4;
    // cin >> limit;
    for (i = limit; i; i--)
        cout << "i = " <<i <<"\n";
    cout <<"Down now that i = " <<i <<"\n";
    int x;
    cout <<"The express x = 100 has the value ";
    cout <<(x=100) <<endl;
    cout << "Now x = " <<x <<endl;
    cout <<"The express x < 3 has the value ";
    cout <<(x<3) <<endl;
    cout <<"The express x > 3 has the value ";
    cout <<(x>3) <<endl;
    // string loop
    cout <<"Enter a word: ";
    string word;
    cin >> word;
    for (i = word.size(); i>=0; i--)
    {
        cout <<word[i];    
        cout <<" This is " << i <<"th letter." <<endl; 
    }
    cout <<"\nBye.\n";
    //
    int a = 20;
    int b = 20;
    cout <<"a =  " << a << " b = " << b <<'\n';
    cout <<"a =  " << ++a << " b = " << b++ <<'\n';
    cout <<"a =  " <<a << " b = " << b <<'\n';
    return 0;
}