.text
.global sum_v
sum_v:
    // Argumentos:
    // v0: float32x4_t a (128 bits)
    // v1: float32x4_t b (128 bits)
    // v2: float32x4_t c (128 bits)
    // x3: float32x4_t* result (64 bits, ponteiro)

    // Soma vetorial: result = a + b + c
    fadd v4.4s, v0.4s, v1.4s  // v4 = a + b (4 floats)
    fadd v4.4s, v4.4s, v2.4s  // v4 += c
    str q4, [x3]              // Armazena v4 em *result (q4 é alias de v4, 128 bits)

    ret