
class Solution {
public:
    bool isPerfectSquare(int num) {
        long double s=sqrt(num);
        if((s-floor(s))==0) return true;
        else return false;
    }
};