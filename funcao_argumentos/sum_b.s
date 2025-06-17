.text
.global sum_b
sum_b:
    // Argumentos:
    // v0: uint8x16_t a (128 bits, 16 bytes)
    // v1: uint8x16_t b (128 bits, 16 bytes)
    // v2: uint8x16_t c (128 bits, 16 bytes)
    // x3: uint8x16_t* result (64 bits, ponteiro)

    // Soma vetorial: result = a + b + c
    add v4.16b, v0.16b, v1.16b  // v4 = a + b (16 bytes)
    add v4.16b, v4.16b, v2.16b  // v4 += c
    str q4, [x3]                // Armazena v4 em *result

    ret