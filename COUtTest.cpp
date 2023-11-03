#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    int carrots;
    carrots = 25;
    cout <<"I have ";
    cout <<carrots;
    cout <<" carrots.";
    cout <<endl;
    carrots = carrots -1;
    cout <<"Crunch, crunch, how I have " << carrots <<" carrots." <<endl;
    cout <<"Please input how many carrots do you have?" <<endl;
    cin >> carrots;
    carrots = carrots + 2;
    cout <<"Now you have " <<carrots <<" carrots" <<endl;
    cout <<"come up and C++ me some time.";
    cout <<endl;
    cout <<"You won't regret it!" <<endl;
    double area;
    cout <<"To calculation side size, Please input area." <<endl;
    cin >>area;
    double side;
    side = sqrt(area);
    cout <<"The side size is " <<side <<" mm." <<endl;
    return 0;
}
