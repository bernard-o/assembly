.text
.global sum_d
sum_d:
    // Argumentos:
    // d0: double a (64 bits)
    // d1: double b (64 bits)
    // d2: double c (64 bits)
    // d3: double d (64 bits)
    // x0: double* result (64 bits, ponteiro)

    // Soma: result = a + b + c + d
    fadd d4, d0, d1     // d4 = a + b
    fadd d4, d4, d2     // d4 += c
    fadd d4, d4, d3     // d4 += d
    str d4, [x0]        // Armazena d4 em *result

    ret