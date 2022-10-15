class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){      //直行橫列 i=row 
            vector<int> tmp;            //tmp=column值 
            for(int j=0;j<=i;j++){      //j=column
                if(j==0 || j==i){       //最左、最右的位置值皆為1 
                    tmp.push_back(1);    
                }
                else{
                    tmp.push_back(ans[i-1][j-1]+ans[i-1][j]);  //dp 用上一行的值進行推算 
                }
            }
            ans.push_back(tmp);  //把上一個row的值存起來 
        }
        return ans;
    }
};
