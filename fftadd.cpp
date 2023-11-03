#include <iostream>
int main()
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;
    cout <<"a = " <<a <<endl;
    cout <<"b - a = " <<b-a <<endl;
    // divide 
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout <<"Integer division : 9/5 = " << 9/5 <<endl;
    cout <<"Floating division : 9.0/5.0 = " << 9.0 /5.0 <<endl;
    cout <<9.0/5.0 <<endl;
    cout <<"Mixed division : 9.0 / 5 = " << 9.0 / 5 <<endl;
    // modulus
    const int Lbs_per_stn = 14;
    int Lbs;
    cout <<"Enter your weight by pounds." <<endl;
    cin >> Lbs ;
    int stone = Lbs / Lbs_per_stn;
    int pounds = Lbs % Lbs_per_stn;
    cout << Lbs << " pounds are " << stone <<" stone are ," << pounds <<" pounds. \n"; 
    // anyany one
    // using namespace MyArray;
    int yam[3];
    yam[0] = 1;
    yam[1] = 10;
    yam[2] = 20;
    cout << "Total number is : " << yam[0] + yam[1] + yam[2] <<endl;
    cout << "Test the array.";
    // string test strings.cpp
    const int size = 15;
    char name1[size];
    char name2[size] = "C++owboy";
    cout <<"Hawdy, I am " <<name2 <<"\n";
    cout << "what is your name? \n";
    cin >> name1;
    cout <<"Well, " <<name1 <<endl;
    return 0;
}