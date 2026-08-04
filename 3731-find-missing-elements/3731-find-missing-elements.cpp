class Solution {
public:
    void sort(vector<int> &nums,int low,int mid,int high)
{
    vector <int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if (nums[left]<nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }
        while(left<=mid)
        {
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++)
        nums[i]=temp[i-low];
}
void merge_sort(vector<int> &nums,int low,int high)
{
    if (low>=high) return ;
    int mid=(low+high)/2;
    merge_sort(nums,low,mid);
    merge_sort(nums,mid+1,high);
    sort(nums,low,mid,high);
}
void ms(vector<int> &nums,int n)
{
    merge_sort(nums,0,n-1);
}
    vector<int> findMissingElements(vector<int>& nums) {
        ms(nums,nums.size());
        vector<int> lst;
        for(int i=0;i<nums.size()-1;i++)
        {
            if (nums[i]!=nums[i+1]-1)
            {
                int temp=nums[i]+1;
                while(temp!=nums[i+1])
                {
                    lst.push_back(temp);
                    temp++;
                }
            }
        }
        return lst;
        
    }
};