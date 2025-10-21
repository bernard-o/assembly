

## EXEMPLO DE COMO COMPILAR E USAR SOLUÇÕES EM ASSEMBLY COM SOLUÇÕES EM C++

# Compilar arquivo Assembly
`as -o obj_asm.o asm_fonte.s`

# Compilar arquivo C++
`clang++ -c -o obj_cpp.o cpp_fonte.cpp`

# Linkar arquivos objeto
`clang++ -o final obj_cpp.o obj_asm.o`

# Executar programa compilado
`chmod +x final && ./final`
