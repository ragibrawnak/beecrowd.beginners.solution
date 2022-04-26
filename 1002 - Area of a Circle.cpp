#define pi 3.14159
#include <iostream>
#include <iomanip>

using namespace std;
//const double pi = 3.14159;

int main(){
    double R,A;
    cin >> R;
    A = pi * R * R;
    cout << "A=" << fixed << setprecision(4) << A << endl;
    return 0;
}
