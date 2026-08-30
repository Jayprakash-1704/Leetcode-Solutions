class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> s1hash(255,0);
        vector <int> s2hash(255,0);

        int s1len=s1.size();
        int s2len=s2.size();

        if(s1len>s2len){
            return false;
        }

        int left=0;
        int right=0;

        while(right<s1len){
            s1hash[s1[right]]++;
            s2hash[s2[right]]++;
            right++;

        }
        right --;
        while(right<s2len){
            if(s1hash==s2hash)
            return true;
            right++;
            if(right!=s2len){
               s2hash[s2[right]]++;
               s2hash[s2[left]]--;
               left++;
            }
               
        }
        return false;
    }
};