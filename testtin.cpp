#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Count the character :";
    cin >>ch;
    while (ch != '#')
    {
        /* code */
        cout << ch;
        ++count;
        // cin >>ch;
        cin.get(ch);
    }
    cout <<endl;
    cout <<count <<" character read.\n";
    return 0;
}