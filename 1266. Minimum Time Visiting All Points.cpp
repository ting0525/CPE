class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count = 0;
        for(int i = 0; i < points.size()-1; i++){
            int x = points[i][0]-points[i+1][0]; //-2 4
            int y = points[i][1]-points[i+1][1]; //-3 4
            count += max(abs(x), abs(y));
        }
        return count;
    }
};
