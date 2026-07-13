class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int org=x;
        long long reverseNum=0;
        int remainder;
        while( x!=0){
          remainder=x%10;
          reverseNum=(reverseNum*10)+remainder;
          x=x/10;        
        }
        if(org==reverseNum){
            return true;

        }
        
        return false;
        
    }
};