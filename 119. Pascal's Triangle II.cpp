class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int i=0;i<=rowIndex;i++){
            vector<int> tmp;
            for(int j=0;j<=i;j++){
                if(j==i || j==0){
                    tmp.push_back(1);
                }
                else{
                    tmp.push_back(ans[j]+ans[j-1]);
                }
            }
            ans=tmp;  //把答案存入ans 
        }
        return ans;
    }
};
