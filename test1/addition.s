.text
.global IntegerAdd_
    IntegerAdd_:
  
        // Calculate a + b

        add w0,w0,w1 //w0 = a + b
        ret // return to caller