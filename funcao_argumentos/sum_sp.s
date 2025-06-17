.text
.global sum_sp
sum_sp:
    // Argumentos:
    // x0-x7: long dummy1-dummy8 (64 bits cada)
    // [sp, #0]: long a (64 bits)
    // [sp, #8]: long b (64 bits)
    // [sp, #16]: long c (64 bits)
    // [sp, #24]: long d (64 bits)
    // [sp, #32]: long* result (64 bits, ponteiro)

    // Soma: result = a + b + c + d
    ldr x5, [sp, #0]    // x5 = a
    ldr x6, [sp, #8]    // x6 = b
    add x5, x5, x6      // x5 += b
    ldr x6, [sp, #16]   // x6 = c
    add x5, x5, x6      // x5 += c
    ldr x6, [sp, #24]   // x6 = d
    add x5, x5, x6      // x5 += d
    ldr x6, [sp, #32]   // x6 = result (ponteiro)
    str x5, [x6]        // Armazena x5 em *result

    ret