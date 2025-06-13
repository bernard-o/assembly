.data
    Foo: .word 100, 200, 300, 400

.text
.global TestLDR_
TestLDR_:
    adrp x1, Foo            // Load page address of Foo into x1
    add x1, x1, :lo12:Foo   // Add low 12 bits to get exact address
    ldr w2, [x1]            // w2 = Foo[0] (100)
    ldr w3, [x1, #4]        // w3 = Foo[1] (200)
    add w0, w2, w3          // w0 = Foo[0] + Foo[1] (300)
    ldr w2, [x1, #8]        // w2 = Foo[2] (300)
    add w0, w0, w2          // w0 += Foo[2] (600)
    ldr w2, [x1, #12]       // w2 = Foo[3] (400)
    add w0, w0, w2          // w0 += Foo[3] (1000)
    ret                     // Return to caller
