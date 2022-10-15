class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){      //�����C i=row 
            vector<int> tmp;            //tmp=column�� 
            for(int j=0;j<=i;j++){      //j=column
                if(j==0 || j==i){       //�̥��B�̥k����m�ȬҬ�1 
                    tmp.push_back(1);    
                }
                else{
                    tmp.push_back(ans[i-1][j-1]+ans[i-1][j]);  //dp �ΤW�@�檺�ȶi����� 
                }
            }
            ans.push_back(tmp);  //��W�@��row���Ȧs�_�� 
        }
        return ans;
    }
};
