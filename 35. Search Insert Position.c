int searchInsert(int* nums, int numsSize, int target){
    
    int i = 0;
    int start = numsSize / 2;
    
    if(nums[start] > target) start = 0;
 
    for(i = start; i < numsSize; i++) {
        if(nums[i] == target) return i;
        else if(nums[i] > target) return i; 
    }
    
    return i;
}
