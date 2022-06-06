class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> a(n);
        int count = 0;
        for(int i=0;i<32;i++){
            if(a[i] == 1)
                count ++;
        }
        
        return count;
    }
};
