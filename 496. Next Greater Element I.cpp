class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){       
            for(int j=0;j<nums2.size();j++){      
                if(nums1[i]==nums2[j]){               //�Q�Ψ�Ӱj���ۦP���r�� 
                    for(int k=j;k<nums2.size();k++){   //�A��k�M��nums2���U�Ӥ�ؼФj���r�� 
                        if(nums1[i]<nums2[k]){   
                            ans.push_back(nums2[k]);
                            break;
                        }
                        else if(k==nums2.size()-1)   //�]�쩳��ܨS���N push_back(-1) 
                            ans.push_back(-1);
                    }
                }
            }
        }
        return ans;
        
    }
};
