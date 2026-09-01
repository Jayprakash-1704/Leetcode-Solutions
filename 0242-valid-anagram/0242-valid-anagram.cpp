class Solution {
public:
    bool isAnagram(string s, string t) {
       int m=s.size();
       int n=t.size();   
        vector <int> f(255,0);
       for(int i=0;i<m;i++){
        f[s[i]]++;
       }
       for(int j=0;j<n;j++){
        f[t[j]]--;

       }
        bool allZeros = count(begin(f), end(f), 0) == f.size();
       return allZeros;
    }
};