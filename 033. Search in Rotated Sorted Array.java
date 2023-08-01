class Solution {
    public int search(int[] nums, int target) {
        int i;
        for(i=0;i<nums.length;i++){
            if(nums[i]==target){
                break;
            }
        }
        if(i>=nums.length)
            return -1;
        else{
            return i;
        }
        
    }
}
