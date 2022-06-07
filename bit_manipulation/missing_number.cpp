class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx = nums[nums.size() - 1];
        for(int i=0;i<mx;i++){
            if(i != nums[i]){
                return i;
            }
        }
        return mx + 1;
    }
};
