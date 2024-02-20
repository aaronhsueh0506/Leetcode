class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      if(image[sr][sc] == color) return image;
      DFS(image, sr, sc, image[sr][sr], color);
      return image;
    }

    void DFS(vector<vector<int>>& image, int sr, int sc, int color, int new_color){
        if(x<0 || y<0 || x>=image.size() || y>=image[0].size() || image[sr][sc]!=color) return;
        image[sr][sc] = new_color;
        DFS(image, sr-1, sc, color, new_color);
        DFS(image, sr, sc-1, color, new_color);
        DFS(image, sr+1, sc, color, new_color);
        DFS(image, sr, sc+1, color, new_color);
    }
};
