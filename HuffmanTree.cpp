#include "HuffmanTree.hpp"
#include "HuffmanBase.hpp"
#include "HeapQueue.hpp"
#include <map>
#include <iostream>


std::string HuffmanTree::compress(const std::string inputStr) {
    std::map<char, size_t> charMap;
    std::map<char, size_t>::iterator it;

    size_t count[256] = {0};

    //reading characters from input string and counting their frequencies and storing those frequencies in the array.
    for (int i = 0; inputStr[i] != '\0'; i++) {
        count[inputStr[i]]++;    
    }
    for(int i = 0; i < 256; i++) {
        if(count[i] != 0){
            charMap.insert(std::pair<char,size_t>((char)i, count[i]));                   
        }
    }

   //create Heap Priority Queue and populate it.
    HeapQueue<HuffmanNode*, HuffmanNode::Compare> PQ;
    for (it = charMap.begin(); it != charMap.end(); ++it) {
        HuffmanNode* node = new HuffmanNode(it->first, it->second);
        n++;
        PQ.insert(node);
    }

    while (PQ.size() != 1){
        HuffmanNode* node1 = PQ.min();
        PQ.removeMin();
        HuffmanNode* node2 = PQ.min();
        PQ.removeMin();
        size_t frequencyT = (node1->getFrequency() + node2->getFrequency());
        HuffmanNode* parentN1N2 = new HuffmanNode('\0', frequencyT, nullptr, node1, node2);
        node1->parent = parentN1N2;
        node2->parent = parentN1N2;
        PQ.insert(parentN1N2);
    }

    root = PQ.min();
    //std::cout << root->getFrequency() << std::endl;
    std::map<char, std::string> codeMap;
    std::string code = "";

    for (it = charMap.begin(); it != charMap.end(); ++it) {
        findCode(PQ.min(), codeMap, code);
    }

    std::string output ="";
    for (auto i : inputStr) {
        output += codeMap[i];
    }
   return output;
}

std::string HuffmanTree::serializeTree() const {
    if (root == nullptr) {
        std::cout << "HELlO" << root->getFrequency() << std::endl;
        return "";
    }

    std::string output = "";
    
    std::cout << root->getFrequency() << std::endl;
    
    serialize(root, output);
    return output;
}

std::string HuffmanTree::decompress(const std::string inputCode, const std::string serializedTree) {

}