class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int len=seats.size();                     //�ǥͤH�� == �y��ƶq 
        int sum=0; //���즸�� 
        sort(seats.begin(), seats.end());        //�Ƨ� 
        sort(students.begin(), students.end());  //�Ƨ� 
        for(int i=0;i<len;i++){                  //����t�Z(�i�ಣ�ͭt�� �ҥH�[�����) 
            sum+=abs(seats[i]-students[i]);
        }
        return sum;
    }
};
