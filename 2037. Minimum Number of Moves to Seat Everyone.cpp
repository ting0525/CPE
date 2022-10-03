class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int len=seats.size();                     //學生人數 == 座位數量 
        int sum=0; //移位次數 
        sort(seats.begin(), seats.end());        //排序 
        sort(students.begin(), students.end());  //排序 
        for(int i=0;i<len;i++){                  //比較差距(可能產生負數 所以加絕對值) 
            sum+=abs(seats[i]-students[i]);
        }
        return sum;
    }
};
