class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(int i = 0; i < moves.size(); i++){
            if(moves[i] == 'U') x++;//1 2 3
            else if(moves[i] == 'D') x--;//1 2 3
            else if(moves[i] == 'L') y--;//1 2
            else if(moves[i] == 'R') y++;//1 2

            //if(x < 0 || y < 0) return false;
        }
        if(x == 0 && y == 0) return true;
        return false;
    }
};
