class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int max_sum=0;
        int ans_max=INT_MIN;
        int min_sum=0;
        int ans_min=INT_MAX;
        int total=0;
        for(int x: A){
            total+=x;
            max_sum=max(max_sum+x,x);
            ans_max=max(ans_max,max_sum);
            min_sum = min(min_sum+x,x);
            ans_min=min(ans_min,min_sum);
        }
        if(ans_max>0){
        return max(ans_max,total-ans_min);
        }
        return ans_max;
    }
    
};