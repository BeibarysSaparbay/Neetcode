class Solution {
public:
    static bool comp(pair<int, int> a, pair<int, int> b){
        return a.first > b.first;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        unordered_map<int, int> m;
        for(auto i:nums)
            m[i] ++;
        vector<pair<int, int>> v;
        for(auto it:m)
            v.push_back({it.second,it.first});
        sort(v.begin(),v.end(),comp);
        vector<int> ans;
        int cnt = 0;
        for(auto i: v){
            if(cnt == k)
                break;
            cnt ++;
            ans.push_back(i.second);
        }
        return ans;
    }
};
