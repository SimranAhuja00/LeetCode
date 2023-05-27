0/5
class Solution
{
    public int searchInsert(int[] nums, int target)
    {
        int i;
        for(i=0 ; i < nums.length ; i++)
        {
            if(nums[i] == target)
            {
                return i;
            }
        }    
        for(i=0;i<nums.length;i++)
        {
            if(i<nums.length-1)
            {
                if(nums[i] < target && target < nums[i+1])
                return (1+i);
            }
            else if(target < nums[0])
            {
                return 0;
            }
            else
            {
                if(nums[i] < target)
                return (nums.length);
            }
        }
        return -1;
    }
}
