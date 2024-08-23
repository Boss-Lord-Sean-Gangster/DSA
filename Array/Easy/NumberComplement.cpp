class Solution {
public:
    int findComplement(int num) {
        int numBits = log2(num)+1;
        unsigned int bitMask = (1u << numBits) -1;
        int complement = num ^ bitMask;
        return complement;
    }
};