.text
.global sum_s
sum_s:
    // Argumentos:
    // s0: float a (32 bits)
    // s1: float b (32 bits)
    // s2: float c (32 bits)
    // s3: float d (32 bits)
    // x0: float* result (64 bits, ponteiro)

    // Soma: result = a + b + c + d
    fadd s4, s0, s1     // s4 = a + b
    fadd s4, s4, s2     // s4 += c
    fadd s4, s4, s3     // s4 += d
    str s4, [x0]        // Armazena s4 em *result

    ret