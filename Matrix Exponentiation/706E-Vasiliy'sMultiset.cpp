class Solution {
public:
    int change(int value, vector<int>& a) {
        vector<long> prev(value+1,0);
        vector<long> curr(value+1,0);
        int n = a.size();
        for(int T=0;T<=value;T++) {
            prev[T] = (T%a[0]==0);
        }

        for(int ind=1;ind<n;ind++){
            for(int T = 0;T<=value;T++){
                long notTake = prev[T];
                long take = 0;
                if(a[ind]<=T){
                    take = curr[T-a[ind]];
                }
                curr[T] = notTake + take;
            }
            prev = curr;
        }
        return prev[value];
    }
};