class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;//Gán value->index
        }
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(mp.count(diff)==1 && mp[diff]!=i){
                return {i,mp[diff]};
            }
        }


    }
};
