class Solution {
public:
    vector<int> twoSum(vector<int>& number, int target) {
        
        vector<int> sumer;
        unordered_map<int,int> store;
        
        for(int i=0;i<number.size();i++)
        {
            int diff=target-number[i];
            
            if(store.count(diff)==1) //sum found 
            {
                for(auto &var:store)
                {
                    if(var.first==diff) sumer.push_back(var.second+1);
                }
                sumer.push_back(i+1);
                break;
            }
            
            store[number[i]]+=i;
        }
        
        return sumer;;
    }
};
