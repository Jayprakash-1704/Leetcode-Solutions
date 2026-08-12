class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        int high=0;
        int n=fruits.size();
       int res= INT_MIN;
        unordered_map<int,int> f;
        for(int high=0;high<n;high++){
            f[fruits[high]]++;
            while(f.size()>2){
                f[fruits[low]]--;
                low++;
                if(f[fruits[low-1]]==0){
                    f.erase(fruits[low-1]);
                }
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};