// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int waysToPartition(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> pref(n), suff(n);
        pref[0] = nums[0]; suff[n-1] = nums[n-1];
        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + nums[i];
            suff[n-i-1] = suff[n-i] + nums[n-i-1];
        }
        
        int ans = 0;
        unordered_map<long long, int> left, right;
        
        for(int i = 0; i < n-1; i++){
            right[pref[i] - suff[i+1]]++;
        }
        
        if(right.count(0)) ans = right[0];
        
        for(int i = 0; i < n; i++){
            int d = k - nums[i], cur = 0;
            if(right.count(-d)) cur += right[-d];
            if(left.count(d)) cur += left[d];
            
            ans = max(ans, cur);
            
            if(i < n-1){
                left[pref[i]-suff[i+1]]++;
                right[pref[i]-suff[i+1]]--;
                if(right[pref[i]-suff[i+1]] == 0) right.erase(pref[i]-suff[i+1]);
            }
        }
        return ans;
    }
};