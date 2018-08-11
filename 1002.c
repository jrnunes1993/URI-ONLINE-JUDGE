#include <iostream>
using namespace std;
#include <iomanip>
int main(){
    double R;
    double A;
    double pi=3.14159;
    cin >> R;
    A=pi*(R*R);
    std::cout << std::fixed;
    std::cout <<"A="<<std::setprecision(4) << A << endl;
    return 0;
}
