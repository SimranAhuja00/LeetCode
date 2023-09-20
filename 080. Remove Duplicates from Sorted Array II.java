class Solution {
    public int removeDuplicates(int[] nums) {
        // Map<Integer,Integer> dup = new HashMap<>();

        // for(int i:nums){
        //     dup.put(i, dup.getOrDefault(i,0)+1);
        // }

        if(nums.length<=2){
            return nums.length;
        }

        int k=2;

        for(int i=2; i<nums.length; i++){
            if(nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k++;
            }
        }

        return k;
    }
}
