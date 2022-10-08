class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){       
            for(int j=0;j<nums2.size();j++){      
                if(nums1[i]==nums2[j]){               //利用兩個迴圈找相同的字元 
                    for(int k=j;k<nums2.size();k++){   //再用k尋找nums2接下來比目標大的字元 
                        if(nums1[i]<nums2[k]){   
                            ans.push_back(nums2[k]);
                            break;
                        }
                        else if(k==nums2.size()-1)   //跑到底表示沒找到就 push_back(-1) 
                            ans.push_back(-1);
                    }
                }
            }
        }
        return ans;
        
    }
};
