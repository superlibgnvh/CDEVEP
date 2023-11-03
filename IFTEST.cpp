#include <iostream>
int main()
{
    using std::cout;
    using std::cin;
    char ch;
    int spaces = 0;
    int total = 0;
    cout <<"Please input letter or words :";
    cin.get(ch);
    cout <<"\n";
    while (ch != '.')
    {
        //cout <<"Please input letter or words : \n";
        if (ch == ' ')
        {
            ++spaces;
            cout <<"You have input one spaces.\n";
        }
        else
        {
            ++total;
            cout <<"You have input a letter.\n";
        }   
        cin.get(ch);
        //cout <<"\n";
    }
    cout <<spaces << " spaces, " <<total;
    cout <<" characters total in setence.\n";
    return 0;
}