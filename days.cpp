#include<iostream>
using namespace std;

int main()
{
    int days;
    cout<<"number of days travelled"<<endl;
    cin>>days;
    int weeks;
    int day;
    weeks=days/7;
    day=days%7;
    cout<<"number of weeks and days travelled is "<<"weeks="<<weeks<<"days="<<day;
    return 0;
}
