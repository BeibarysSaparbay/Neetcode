class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] != nums[i+1] && i + 1 != nums.size()){
                return nums[i];
            }
            else{
                i ++;
            }
        }
        return nums[nums.size() - 1];
    }
};
