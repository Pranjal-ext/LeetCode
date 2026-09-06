class Solution {
public:
    void merge(vector<int> &arr,int low,int mid,int high)
    {
        vector<int>temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right <=high)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for(auto it:temp)
        {
            arr[low]=it;
            low++;
        }
    }
    int count(vector<int>& nums,int low,int mid,int high)
    {
        int cnt=0;int right=mid+1;
        for(int i=low;i<=mid;i++){
            while(right<=high && nums[i]>(2*(long long)nums[right]))
            {
                right++;
            }
                cnt=cnt+(right-(mid+1));
        }return cnt;
    }
    int mergeSort(vector<int>& nums,int low,int high)
    {
        int cnt=0;
        if(low>=high) return cnt;
        int mid=(low+high)/2;
        cnt+=mergeSort(nums,low,mid);
        cnt+=mergeSort(nums,mid+1,high);
        cnt+=count(nums,low,mid,high);
        merge(nums,low,mid,high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
        
    }
};