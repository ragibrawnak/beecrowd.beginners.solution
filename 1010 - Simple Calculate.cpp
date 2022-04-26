#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    double id_1,unit_1,price_1, total_1;
    double id_2,unit_2,price_2, total_2;
    cin >> id_1 >> unit_1 >> price_1;
    cin >> id_2 >> unit_2 >> price_2;
    total_1 = unit_1*price_1;
    total_2 = unit_2*price_2;

    double total;
    total = total_1+total_2;
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;

}
