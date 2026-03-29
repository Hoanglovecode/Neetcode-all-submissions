class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>check;
        for(int num:nums){
            if(check.count(num)==0){
                check.insert(num);
            }
            else return true;
        }
        return false;
    }
};