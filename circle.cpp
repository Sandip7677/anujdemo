#include<iostream>
using namespace std;
const double pi =3.14;

int main()
{
    double rad;
    cout<<"radius of circle is "<<endl;
    cin>>rad;
    double area;
    area =pi *(rad*rad);
    cout<<"area of circle of radius "<<rad<<"is "<<area;
    return 0;
}
