class Solution {
    public int removeElement(int[] nums, int val) 
    {
        if(nums.length==0)
        {
            return 0;
        }

        int i=0,j=0;
        for(i=0;i<nums.length;i++)
        {
            if(nums[i] != val)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
}
