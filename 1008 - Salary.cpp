#include <iostream>
#include <iomanip>

using namespace std;

int main(){
int id;
double salary, hour, total;
cin >> id >> salary >> hour;
cout << "NUMBER = " << id << endl;
total = salary*hour;
cout << "SALARY = U$ " << fixed << setprecision(2) << total << endl;
}
