class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int i;
        for(i=1 ; i < nums.size() ; i++ ){
            if(nums[i-1] != nums[i]){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};
