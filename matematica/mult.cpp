
#include <iostream>

using namespace std;

extern "C" int multiplicar32b_(int i, int j);
extern "C" long multiplicar64b_(long i, long j);
extern "C" long multiplicar64b_signed_(int a, int b);
extern "C" unsigned long multiplicar64b_unsigned(unsigned int i, unsigned int j);

int main(int argc, char** argv) {
    
    int a = 10, b = 20, r;

    r = multiplicar32b_(a, b);
    cout << a << " * " << b << " = " << r;

    r = multiplicar64b_(a, b);
    cout << a << " * " << b << " = " << r;

    r = multiplicar64b_signed_(a, b);
    cout << a << " * " << b << " = " << r;

    r = multiplicar64b_unsigned(a, b);
    cout << a << " * " << b << " = " << r;

    return 0;
}
