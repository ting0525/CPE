class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    
        int n = image.size();
        int m = image[0].size();
        
        for(int i =0; i<n ; i++){
            for(int j = 0; j < m; j++){
               
                image[i][j] = abs(1-image[i][j]);     //先0 1互換 
            }
            reverse(image[i].begin(), image[i].end());//再字串反轉 
        }
    
        return image;
    } 
};
