class Solution {
public:
    void fill(vector<vector<int>>& image, int sr, int sc, int newColor,int va)
    {
        if((sr==image.size()) || (sc==image[0].size()) || sr<0 || sc <0)
            return;
        if(image[sr][sc]==va)
        {
            cout<<image[sr][sc]<<" "<<sr<<sc<<endl;
            image[sr][sc]=newColor;
            cout<<"new"<<image[sr][sc]<<"va="<<va<<endl;
            fill(image,sr+1,sc,newColor,va);
            fill(image,sr,sc+1,newColor,va);
            fill(image,sr-1,sc,newColor,va);
            fill(image,sr,sc-1,newColor,va);         
        }
        return;
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int va=image[sr][sc];
        if(va==newColor)return image;
        fill(image,sr,sc,newColor,va);
        return image;
        
        
    }
};
