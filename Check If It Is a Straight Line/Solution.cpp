class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c.size()==2)
            return true;
        double m = 1.0*(c[1][1]-c[0][1])/(c[1][0]-c[0][0]);
        for(int i=2; i<c.size(); ++i){
            double slope = 1.0*(c[i][1]-c[i-1][1])/(c[i][0]-c[i-1][0]);
            if(slope!=m)
                return false;
        }
        return true;
    }
};
