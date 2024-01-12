#include "AssemblyCompiler.h"

int main(int argc, char *argv[]) {
    AssemblyCompiler *comp;
    if (argc < 2) {
        comp = new AssemblyCompiler("../example.txt");
    } else {
        comp = new AssemblyCompiler(argv[1]);
    }
    comp->writeIntoABinFile("exe.bin");
}