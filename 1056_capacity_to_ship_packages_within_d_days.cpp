class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        long long start = 0, end = 0, mid, ans;
        for(int i = 0; i < n; i++){
            if(start < weights[i])
                start = weights[i];
            end += weights[i];
        }
        while(start <= end){
            mid = start + (end - start) / 2;
            long long capacity = 0, count = 1;
            for(int i = 0; i < n; i++){
                capacity += weights[i];
                if(capacity > mid){
                    count++;
                    capacity = weights[i];
                }
            }
            if(count <= days){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};