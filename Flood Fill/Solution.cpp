class Solution {
     void ans(vector<vector<int>>& image, int sr, int sc, int newColor,int oldcolor){
        if(sr<0 || sc<0 || sr >= image.size() || sc >=image[0].size() || oldcolor != image[sr][sc]) return;
        image[sr][sc] = newColor;
        ans(image,sr+1,sc,newColor, oldcolor);
        ans(image,sr-1,sc,newColor, oldcolor);
        ans(image,sr,sc-1,newColor, oldcolor);
        ans(image,sr,sc+1,newColor, oldcolor);
                
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor) return image;
        ans(image,sr,sc,newColor, image[sr][sc]);
        return image;
    }
};