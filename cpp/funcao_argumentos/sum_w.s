.text
.global sum_w
sum_w:
    // Argumentos:
    // w0: int a (32 bits)
    // w1: int b (32 bits)
    // w2: int c (32 bits)
    // w3: int d (32 bits)
    // x4: int* result (64 bits, ponteiro)

    // Soma: result = a + b + c + d
    add w5, w0, w1     // w5 = a + b
    add w5, w5, w2     // w5 += c
    add w5, w5, w3     // w5 += d
    str w5, [x4]       // Armazena w5 em *result

    ret