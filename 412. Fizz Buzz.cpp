class Solution {
public:
    vector<string> fizzBuzz(int a) {
        vector<string> n;
        for(int i=1;i<=a;i++){
            if(i>=15&&i%3==0&&i%5==0){      //�P�_�O�_�i�H�㰣15 
                n.push_back("FizzBuzz");
            }
            else if(i>=3&&i%3==0){          //�P�_�O�_�i�H�㰣3����㰣5 
                n.push_back("Fizz");
            }
            else if(i>=5&&i%5==0){          //�P�_�O�_�i�H�㰣5����㰣3 
                n.push_back("Buzz");
            }
            else{
                n.push_back(to_string(i)); //to_string()�禡:�ରstring 
            }
        }
        return n;
    }
};
