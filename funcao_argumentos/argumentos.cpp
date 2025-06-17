#include <cstdio>
#include <arm_neon.h>
#include <arm_fp16.h>
#include <iostream>

using namespace std;

extern "C" void sum_v(float32x4_t a, float32x4_t b, float32x4_t c, float32x4_t* result);
extern "C" void sum_d(double a, double b, double c, double d, double* result);
extern "C" void sum_s(float a, float b, float c, float d, float* result);
extern "C" void sum_h(float16_t a, float16_t b, float16_t c, float16_t d, float* result);
extern "C" void sum_x(long a, long b, long c, long d, long* result);
extern "C" void sum_w(int a, int b, int c, int d, int* result);
extern "C" void sum_sp(long d1, long d2, long d3, long d4, long d5, long d6, long d7, long d8,
                       long a, long b, long c, long d, long* result);

int main() {

    // Teste sum_v
    float va_vals[] = {1.0f, 2.0f, 3.0f, 4.0f};
    float vb_vals[] = {1.0f, 1.0f, 1.0f, 1.0f};
    float vc_vals[] = {2.0f, 2.0f, 2.0f, 2.0f};
    float32x4_t va = vld1q_f32(va_vals);
    float32x4_t vb = vld1q_f32(vb_vals);
    float32x4_t vc = vld1q_f32(vc_vals);
    float32x4_t vresult;
    sum_v(va, vb, vc, &vresult);
    cout << "\nsum_v: " << vresult[0] << ", " << vresult[1] << ", " << vresult[2] << ", " << vresult[3];

    // Teste sum_d
    double da = 1.5, db = 2.5, dc = 3.5, dd = 4.5, dresult;
    sum_d(da, db, dc, dd, &dresult);
    cout << "\nsum_d: " << dresult;

    // Teste sum_s
    float sa = 1.1f, sb = 2.2f, sc = 3.3f, sd = 4.4f, sresult;
    sum_s(sa, sb, sc, sd, &sresult);
    cout << "\nsum_s: " << sresult;

    // Teste sum_h
    float16_t ha = 1.0f, hb = 2.0f, hc = 3.0f, hd = 4.0f, hresult;
    sum_h(ha, hb, hc, hd, &hresult);
    cout << "\nsum_h: " << hresult;

    // Teste sum_x
    long xa = 100, xb = 200, xc = 300, xd = 400, xresult;
    sum_x(xa, xb, xc, xd, &xresult);
    cout << "\nsum_x: " << xresult;

    // Teste sum_w
    int wa = 10, wb = 20, wc = 30, wd = 40, wresult;
    sum_w(wa, wb, wc, wd, &wresult);
    cout << "\nsum_w: " << wresult;

    // Teste sum_sp
    long spa = 1, spb = 2, spc = 3, spd = 4, spresult;
    sum_sp(0, 0, 0, 0, 0, 0, 0, 0, spa, spb, spc, spd, &spresult);
    cout << "\nsum_sp: " << spresult;

    return 0;
}