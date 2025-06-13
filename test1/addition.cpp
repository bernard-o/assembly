#include <iostream>

using namespace std;

extern "C" int IntegerAdd_(int a, int b);

int main(int argc, char** argv) {
    
    int a, b, r;
    
    a = 10; b = 20;;
    r = IntegerAdd(a, b);
    cout << a << " + " << b << " = " << r
    
    a = 101; b = 34;
    r = IntegerAdd(a, b);
    cout << a << " + " << b << " = " << r

    return 0;
}
