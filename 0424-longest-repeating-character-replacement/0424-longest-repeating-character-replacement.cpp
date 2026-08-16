class Solution {
public:
    int find(vector <int> &a){
        int max_c=-1;
        for(int i=0;i<256;i++){
            max_c=max(max_c,a[i]);
            
        }
        return max_c;
    }
    int characterReplacement(string s, int k) {
        int low=0;
        int high=0;
        int res=INT_MIN;
        int n=s.size();
        vector <int> f(256,0);
        for(high=0;high<n;high++){
            f[s[high]]++;
            int len=high-low+1;
            int maxcount=find(f);
            int diff=len-maxcount;
            while(diff>k){
                f[s[low]]--;
                low++;
                maxcount=find(f);
                len=high-low+1;
                diff=len-maxcount;
            }
            len=high-low+1;
            res=max(res,len);

        }
        return res;

    }
};