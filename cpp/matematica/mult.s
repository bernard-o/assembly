.text

    // extern "C" int multiplicar32b_(int i, int j);
    .global multiplicar32b_
    multiplicar32b_:
        mul w0, w0, w1 // w0 = i * j (32-bit)
        ret

    // extern "C" long multiplicar64b_(long i, long j);
    .global multiplicar64b_
    multiplicar64b_:
        mul x0, x0, x1 // x0 = i * j (64-bit)
        ret

    // extern "C" long multiplicar64b_signed_(int a, int b);
    .global multiplicar64b_signed_
    multiplicar64b_signed_:
        smull x0, w0, w1 // x0 = i * j signed 64-bit
        ret

    // extern "C" unsigned long multiplicar64b_unsigned(unsigned int i, unsigned int j);
    .global multiplicar64b_unsigned
    multiplicar64b_unsigned:
        umull x0, w0, w1 // x0 = i * j unsigned 64-bit
        ret
