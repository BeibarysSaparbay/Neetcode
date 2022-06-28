class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;
        int zeroes=0;
        int posi;
        for(int i=0;i<nums.size();i++){
            if(zeroes<=1){
                if(nums[i]!=0)total*=nums[i];
                else {
                    posi=i;
                    zeroes++;
                }
            }
            else{
                break;
            }
        }
        if(zeroes==0){
            for(int i=0;i<nums.size();i++){
                nums[i]=total/nums[i];
            }
            return nums;
        }
        else if(zeroes==1){
            for(int i=0;i<nums.size();i++){
                nums[i]=0;
            }
            nums[posi]=total;
            return nums;
        }
        else{
            for(int i=0;i<nums.size();i++){
                nums[i]=0;
            }
            return nums;
        }
        return nums;
    }
};
