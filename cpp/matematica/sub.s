.text

    // extern "C" int subtrair32b_(int i, int j);
    .global subtrair32b_
    subtrair32b_:

        sub w0, w0, w1 //w0 = i - j
        ret

    // extern "C" long subtrair64b_(long i, long j);
    .global subtrair64b_
    subtrair64b_:

        sub x0, x0, x1 //x0 = i - j
        ret
        