#include<iostream>
using namespace std;
struct sEmployee
{
    int id;
    string name;
    string address;
};
class cEmployee
{
    int id;
    string name;
    string address;
};
int main()
{
    sEmployee emp1;
    cEmployee emp2;
    cout << "sizeof emp1 is" << sizeof(emp1);
    cout << "\nsizeof emp2 is" << sizeof(emp2);
    return 0;
}