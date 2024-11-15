class Solution {
    public int[] twoSum(int[] nums, int target) {


        for(int i = 0; i < nums.length; i++){
            for (int j=i+1; j < nums.length; j++){
                if (nums[i]+nums[j] == target){
                    results[0] = i;
                    results[1] = j;
                    return new int[] results = {i,j};
                }

            }
            }
        }
        return results;
    }
}