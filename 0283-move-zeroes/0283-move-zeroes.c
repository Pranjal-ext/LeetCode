void moveZeroes(int* nums, int numsSize) {
    int j=0;
    while(j<numsSize && nums[j]!=0)
    {
        j++;
    }
    int i=j+1;
    while(i<numsSize)
    {
        if (nums[i]!=0)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j++;
        }
        i++;
    }
}