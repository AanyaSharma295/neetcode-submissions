class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        if(k>mp.size())return {};
        multimap<int,int>mmp;
        for(auto it:mp){
            mmp.insert({it.second,it.first});
        }
        vector<int>op;
        int cnt=mp.size()-k;
        int tempcnt=0;
        for(auto it:mmp){
            tempcnt++;
            if(tempcnt>=cnt+1){
                op.push_back(it.second);
            }
        }
        return op;
    }
};
