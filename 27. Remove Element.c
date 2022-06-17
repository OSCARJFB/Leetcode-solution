int removeElement(int* nums, int numsSize, int val){
    
    int counter = 0;  
    
    if(numsSize == 0) return 0;
    
    for(int i = 0; i < numsSize; i++) {
            
        if(nums[i] == val) {

            for(int n = i; n < numsSize; n++) {
                if(nums[n] != val) {
                    nums[i] = nums[n];
                    nums[n] = val;
                    counter++;
                    break;
                }

            }
        }
        else counter++;
    }

    return counter;