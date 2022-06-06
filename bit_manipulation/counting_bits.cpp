class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int cnt;
        for(int i=0;i<=n;i++){
            int p = i;
            cnt = 0;
            while(p != 0){
                if(p%2 == 1){
                    cnt ++;
                }
                p /= 2;
            }
            ans.push_back(cnt);
        } 
        return ans;
    }
};
