class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k) return "0";
        int i=0;
        while(k>0){
            i=(i>0)?(i-1):0;
            while(num[i]<=num[i+1] && i<num.size()-1){
                i++;
            }
            num.erase(num.begin()+i);
            k--;
        }
        int first_nonZero;
        for(int i=0; i<num.size(); ++i){
            if(num[i]!='0'){
                first_nonZero=i;
                break;
            }
        }
       // auto nonzero = num.find_first_not_of("0");
       // cout<<nonzero<<"\n";
        //cout<<first_nonZero;
        num.erase(0,first_nonZero);
        if(num.size()==0) return "0";
        return num;
    }
};