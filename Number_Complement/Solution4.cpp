class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        int pow=1;
        while(num>0){
            ans+=(num%2^1)*pow;
            pow<<=1;
            num>>=1;
            
        }
        return ans;
    }
};