#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

    double A,B,result;
    cin >> A >> B;
    result=((A*3.5)+(B*7.5))/11;
    std::cout << std::fixed;
    std::cout << "MEDIA = " <<std::setprecision(5) << result << endl;
    return 0;
}

