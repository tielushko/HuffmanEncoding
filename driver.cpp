#include "HuffmanTree.hpp"
#include "TestStrings.hpp"

int main() {
    HuffmanTree t;
    const std::string turing = "if a machine is expected to be infallible it cannot also be intelligent";
    
    std::string output = t.compress(turing);
    if (turingCode == output) 
        //std::cout << "Yay";

    std::cout << t.serializeTree();

    
    return 0;
}