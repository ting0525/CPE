class Solution {
public:
    int xorOperation(int n, int start) {
        int first=start,second=start+2;
        for(int i=0;i<n-1;i++){    //n-1是因為 if n=5 要做 xor 4次 
            //cout<<"second:"<<second<<endl;
            first=first^second;
            //cout<<"first:"<<first<<endl;
            second=second+2;
        }
        return first;

    }
};
