
#include <iostream>

using namespace std;

extern "C" int subtrair_(int i, int j);

int main(int argc, char** argv) {
    
    int a, b, r;
    
    a = 20; b = 10;
    r = subtrair_(a, b);
    cout << a << " - " << b << " = " << r;
    
    a = 101; b = 34;
    r = subtrair_(a, b);
    cout << "\n" << a << " - " << b << " = " << r;

    return 0;
}
