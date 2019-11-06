#include "HuffmanTree.hpp"
#include "TestStrings.hpp"

int main() {
    HuffmanTree t;
    std::string compressed, serialized, decompress;
    /*
    //turing compress test
    std::string compressed = t.compress(turing);
    std::cout << compressed << std::endl;
     if (turingCode == compressed) 
        std::cout << "Yay" << std::endl;
    
    //turing serialized test
    std::string serialized =  t.serializeTree();
    std::cout << serialized << std::endl;
    if (turingTree == serialized)
        std::cout << "yay" << std::endl;
 
    //turing decompress test
    std::string decompress = t.decompress(compressed, serialized);
    std::cout << decompress << std::endl;
    if (turing == decompress)
        std::cout << "yay" << std::endl;
    
    //dijkstra compress values
    compressed = t.compress(dijkstra);
    std::cout << compressed << std::endl;
     if (dijkstraCode == compressed) 
        std::cout << "Yay" << std::endl;
    
    //dijksta serialized test
    serialized =  t.serializeTree();
    std::cout << serialized << std::endl;
    if (dijkstraTree == serialized)
        std::cout << "yay" << std::endl;
 
    //dijkstra decompress test
    decompress = t.decompress(compressed, serialized);
    std::cout << decompress << std::endl;
    if (dijkstra == decompress)
        std::cout << "yay" << std::endl;

    //wikipedia compress values
    compressed = t.compress(wikipedia);
    std::cout << compressed << std::endl;
     if (wikipediaCode == compressed) 
        std::cout << "Yay" << std::endl;
    
    //wikipedia serialized test
    serialized = t.serializeTree();
    std::cout << serialized << std::endl;
    if (wikipediaTree == serialized)
        std::cout << "yay" << std::endl;
 
    //wikipedia decompress test
    decompress = t.decompress(compressed, serialized);
    std::cout << decompress << std::endl;
    if (wikipedia == decompress)
        std::cout << "yay" << std::endl;
    */
    
    //constitution compress values
    compressed = t.compress(constitution);
    std::cout << compressed << std::endl;
     if (constitutionCode == compressed) 
        std::cout << "Yay" << std::endl;
    
    //constitution serialized test
    serialized = t.serializeTree();
    std::cout << serialized << std::endl;
    if (constitutionTree == serialized)
        std::cout << "yay" << std::endl;
 
    //constitution decompress test
    decompress = t.decompress(compressed, serialized);
    std::cout << decompress << std::endl;
    if (constitution == decompress)
        std::cout << "yay" << std::endl;
    
    return 0;
}