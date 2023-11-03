#include <iostream>
struct trvals_time
{
    /* data */
    int hours;
    int mins;
};
const int Mins_per_hour = 60;
trvals_time sum(trvals_time t1, trvals_time t2);
void show_time(trvals_time t);
int main()
{
    using namespace std;
    trvals_time day1 = {5, 45};
    trvals_time day2 = {6, 30};
    trvals_time trip = sum(day1, day2);
    cout <<"Trvals total :";
    show_time(trip);

    trvals_time day3 = {7, 30};
    trvals_time ThreeDays = sum(trip, day3);
    cout <<"Trvals three days total :";
    show_time(ThreeDays);

    trvals_time day4 = {8, 33};
    trvals_time FourDays = sum(ThreeDays, day4);
    cout <<"Trvals four days total :";
    show_time(FourDays);

    return 0;
}

trvals_time sum(trvals_time t1, trvals_time t2)
{
    trvals_time total;
    total.mins = (t1.mins + t2.mins) % Mins_per_hour;
    total.hours = t1.hours + t2.hours +
                    (t1.mins + t2.mins) / Mins_per_hour;
    return total;
}
void show_time(trvals_time t)
{
    using namespace std;
    cout<<t.hours <<" hours, " <<t.mins <<" mins.\n";
}
