class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        vector<char>S;
        vector<char>T;
        for(auto it:s){
            S.push_back(it);
        }
        for(auto it:t){
            T.push_back(it);
        }
        sort(S.begin(),S.end());
        sort(T.begin(),T.end());
        for(int i=0;i<S.size();i++){
            if(S[i]!=T[i]){
                return false;
            }
        }
        return true;
        
    }
};
