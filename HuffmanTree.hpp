#ifndef HUFFMANTREE_HPP
#define HUFFMANTREE_HPP

#include "HuffmanBase.hpp"
#include "HeapQueue.hpp"
#include <map>

class HuffmanTree : HuffmanTreeBase {
    private:
        size_t n;
        HuffmanNode* root;
       // HeapQueue<HuffmanNode*, HuffmanNode::Compare> PQ; // root node 
    public:
        std::string compress(const std::string inputStr) override;
        std::string serializeTree() const override;
        std::string decompress(const std::string inputCode, const std::string serializedTree) override;
        void findCode(const HuffmanNode* node, std::map<char, std::string>& codeMap, std::string code) {
            if (node == nullptr) 
                return;

            if(node->isLeaf())
                codeMap[node->getCharacter()] = code; 

            findCode(node->left, codeMap, code + "0");
            findCode(node->right, codeMap, code + "1");

        }

        void serialize(const HuffmanNode* node, std::string& outString) const {
            if (node == nullptr) 
                return;
            
            serialize(node->left, outString);
            serialize(node->right, outString);

            if (node->isLeaf())
                outString = outString + "L" + node->getCharacter();
            if (node->isBranch()) 
                outString += "B";
        }

            /*if (node->isLeaf() == true) {
                return code;
            }*/
            //if (node->isLeaf()) 
            //    return code;
            //else if(node->left != nullptr) 
            //if (node->left != nullptr) {
            //    std::cout << "coding left ";
            //return preOrderCoding(node->left, code + "0");
            //} else if (node->right != nullptr) {
            //   std::cout << "coding right ";
            //else {
            //    return preOrderCoding(node->right, code + "1");
            //}
};

#endif /*HUFFMANTREE_HPP*/