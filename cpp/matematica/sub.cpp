
#include <iostream>

using namespace std;

extern "C" int subtrair32b_(int i, int j);
extern "C" long subtrair64b_(long i, long j);

int main(int argc, char** argv) {
    
    int a, b, r;
    
    a = 20; b = 10;
    r = subtrair32b_(a, b);
    cout << a << " - " << b << " = " << r;
    
    long i = 101; j = 34, k;
    k = subtrair64b_(a, b);
    cout << "\n" << i << " - " << j << " = " << k;

    return 0;
}
