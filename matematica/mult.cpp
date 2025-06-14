
#include <iostream>

using namespace std;

extern "C" int multiplicar_(int i, int j);

int main(int argc, char** argv) {
    
    int a, b, r;
    
    a = 10; b = 20;
    r = multiplicar_(a, b);
    cout << a << " * " << b << " = " << r;
    
    a = 101; b = 34;
    r = multiplicar_(a, b);
    cout << "\n" << a << " * " << b << " = " << r;

    return 0;
}
