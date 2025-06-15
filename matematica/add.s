.text

    // extern "C" int adicionar32b_(int i, int j);
    .global adicionar32b_
    adicionar32b_:

        add w0, w0, w1 //w0 = i + j
        ret

    // extern "C" long adicionar64b_(long i, long j);
    .global adicionar64b_
    adicionar64b_:

        add x0, x0, x1 //x0 = i + j
        ret
        