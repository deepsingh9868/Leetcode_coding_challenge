class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> ans(N+1);
        for(vector<int> x: trust){
            ans[x[0]]--;
            ans[x[1]]++;
        }
        for(int i=1; i<=N; ++i){
            if(ans[i]==N-1) return i;
        }
        return -1;
    }
};