

# COMO COMPILAR SOLUÇÕES EM ASSEMBLY JUNTO COM C/C++

## Compilar solução em Assembly
`as -o obj_asm.o asm_fonte.s`

## Compilar solução em C/C++
- C
`clang -c -o obj_cpp.o cpp_fonte.c`
- C++
`clang++ -c -o obj_cpp.o cpp_fonte.cpp`

## Linkar arquivos objeto
- C
`clang -o final obj_cpp.o obj_asm.o`
- C++
`clang++ -o final obj_cpp.o obj_asm.o`

## Permitir execução em arquivo compilado
`chmod +x final && ./final`
