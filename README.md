
Compilar arquivo Assembly
# as -o sup.o main.s

Compilar arquivo C++
# clang++ -c -o main.o main.cpp

Linkar arquivos objeto
# clang++ -o runme main.o sup.o

Executar programa compilado
# chmod +x runme
# ./runme
