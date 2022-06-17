/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* retValue = malloc(sizeof(int) * 2);
    
    for(int i = 0; i < numsSize; i++) {
        for(int n = 0; n < numsSize; n++) {
            if(target == nums[i] + nums[n] && i != n) {
                retValue[0] = n;
                retValue[1] = i;
                goto exit;
            }            
        }
    }
    
    exit:
    *returnSize = 2;
    return retValue;
}