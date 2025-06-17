.text
.global sum_h
sum_h:
    // Argumentos:
    // h0: float16_t a (16 bits)
    // h1: float16_t b (16 bits)
    // h2: float16_t c (16 bits)
    // h3: float16_t d (16 bits)
    // x0: float* result (64 bits, ponteiro)

    // Converte cada float16_t para float e soma
    fcvt s4, h0         // s4 = (float)a
    fcvt s5, h1         // s5 = (float)b
    fadd s4, s4, s5     // s4 += b
    fcvt s5, h2         // s5 = (float)c
    fadd s4, s4, s5     // s4 += c
    fcvt s5, h3         // s5 = (float)d
    fadd s4, s4, s5     // s4 += d
    str s4, [x0]        // Armazena s4 em *result

    ret