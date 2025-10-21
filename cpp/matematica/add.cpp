
#include <iostream>

using namespace std;

extern "C" int adicionar32b_(int i, int j);
extern "C" long adicionar64b_(long i, long j);

int main(int argc, char** argv) {
    
    int a, b, r;
    
    a = 10; b = 20;
    r = adicionar32b_(a, b);
    cout << a << " + " << b << " = " << r;
    
    long i = 101; j = 34, k;
    k = adicionar64_(a, b);
    cout << "\n" << i << " + " << j << " = " << k;

    return 0;
}
