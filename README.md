

# COMO COMPILAR ASSEMBLY COM C/C++

## Compilar solução em Assembly
`as -o obj_asm.o asm_fonte.s`

## Compilar solução em C/C++
- C<br>
`clang -c -o obj_c.o cpp_fonte.c`
- C++<br>
`clang++ -c -o obj_cpp.o cpp_fonte.cpp`

## Linkar arquivos objeto
- C<br>
`clang -o final obj_c.o obj_asm.o`
- C++<br>
`clang++ -o final obj_cpp.o obj_asm.o`

## Permitir execução em arquivo compilado
`chmod +x final && ./final`
