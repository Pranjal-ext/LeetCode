class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            cnt=count(nums.begin(),nums.end(),nums[i]);
            if(cnt==1)
            return nums[i];
        }return 0;
    }
};