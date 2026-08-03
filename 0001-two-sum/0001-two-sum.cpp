class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<long long,int>map;
        long long num2;
        for(int i=0;i<nums.size();i++)
        {
            long long num1=nums[i];
            num2=target-num1;;
            if(map.find(num2)!=map.end())
            return {map[num2],i};
            map[num1]=i;
            
        }return {-1,-1};
        
    }
};