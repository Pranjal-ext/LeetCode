class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0,cnt=0,more,sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            if(sum==k)
                cnt++;
            more=sum-k;
            if(mp.find(more)!=mp.end())
            {
                cnt=cnt+mp[more];
            }
            mp[sum]++;
        }return cnt;
        
    }
};