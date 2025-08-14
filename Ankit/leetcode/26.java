// Remove duplicate number from sorted array //

class Solution {
    public int removeDuplicates(int[] nums) {
          //i = 0   // last unique element index
         //j = 1   // current scanning index
           if (nums.length == 0) return 0;
        int i=0; 
        for(int j=1;j<nums.length;j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
}