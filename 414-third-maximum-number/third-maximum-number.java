class Solution {
    public int thirdMax(int[] nums) {
        long largest = Long.MIN_VALUE;
        long sl = Long.MIN_VALUE;
        long tl = Long.MIN_VALUE;
        for(int i =0;i<nums.length;i++){
            if(nums[i]>largest){
                tl = sl;
                sl = largest;
                largest = nums[i];
               
            }
            if(nums[i]>sl && nums[i]!= largest){
                tl=sl;
                sl = nums[i];
                
            }
            if(nums[i]>tl && nums[i] != sl && nums[i] != largest){
                tl=nums[i];
            }
        }
        if(tl == Long.MIN_VALUE){
            return (int) largest;
        }
        return (int) tl;
    }
}