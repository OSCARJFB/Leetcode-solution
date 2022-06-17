int maxSubArray(int* nums, int numsSize){
    
    int sum = 0, tempSum = 0, lastElement = 0, negative_zero = -10000; 
     
    if(numsSize == 1) return nums[0];
    
    for(int i = 0; i < numsSize; i++) {  

        // A positive start of substring. 
        if(nums[i] > 0 && tempSum == 0) 
            tempSum += nums[i];
        else if(tempSum > 0 && tempSum + nums[i] > 0) 
            tempSum += nums[i];
        else if(tempSum > 0)
            tempSum = 0;
        
        // A negative or 0 substring. 
        if(nums[i] < 0 || nums[i] == 0) {
            if(nums[i] > negative_zero) 
                negative_zero = nums[i];
        }
        
        if(tempSum > sum && sum > -1) 
            sum = tempSum;
    
        lastElement = nums[i];
    }
    
    if(sum != 0)
        return sum;
    else
        return negative_zero;
}