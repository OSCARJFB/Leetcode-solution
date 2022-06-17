
int removeDuplicates(int nums, int numsSize){
    
    int temp = 101, index = 0, counter = 0; 
    
    if(numsSize == 1) return 1;
    
    for(int i = 0; i  numsSize; i++) { 
   
        if(nums[i] == temp) 
            nums[i - 1] = 101;

        temp = nums[i];
    }

    for(int i = 0; i  numsSize; i++) {
        if(nums[i] == 101) 
            index = i;
        
        for(int n = i; n  numsSize; n++) {
            if(nums[index] == 101 && nums[n] != 101) {
                nums[index] = nums[n];
                nums[n] = 101;
            }
        }
    }
    
    
    for(int i = 0; i  numsSize; i++) {                             
        if(nums[i] == 101)
            break;
        counter++;
    }

    return counter;
}