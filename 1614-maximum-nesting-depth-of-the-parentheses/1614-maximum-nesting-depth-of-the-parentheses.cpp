class Solution {
public:
    int maxDepth(string s) {
        int ob=0;
        int cb=0;
        for(int i=0; i<s.length();i++){
        char c=s[i];
        if(c=='('){
            ob++;
            cb=max(ob,cb);
        }
        else if(c==')'){
            ob--;
        }

        }
        return cb;
    }
    
};