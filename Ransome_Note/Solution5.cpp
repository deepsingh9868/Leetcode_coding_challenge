class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ans;
        for(char c: magazine) ans[c]++;
        for(char c: ransomNote){
            if(ans[c])ans[c]--;
            else return false;
        }
        return true;
    }
};