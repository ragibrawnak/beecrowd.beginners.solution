#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
string name;
double salary, sold, bonus, total;
cin >> name >> salary >> sold;
bonus = sold*0.15;
total = salary+bonus;
cout << "TOTAL = R$ " << fixed << setprecision(2) << total  << endl;
}
