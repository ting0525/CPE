class Solution {
public:
    vector<string> fizzBuzz(int a) {
        vector<string> n;
        for(int i=1;i<=a;i++){
            if(i>=15&&i%3==0&&i%5==0){      //判斷是否可以整除15 
                n.push_back("FizzBuzz");
            }
            else if(i>=3&&i%3==0){          //判斷是否可以整除3不能整除5 
                n.push_back("Fizz");
            }
            else if(i>=5&&i%5==0){          //判斷是否可以整除5不能整除3 
                n.push_back("Buzz");
            }
            else{
                n.push_back(to_string(i)); //to_string()函式:轉為string 
            }
        }
        return n;
    }
};
