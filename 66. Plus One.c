/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    
    int newSize = digitsSize;
    int* returnResult;
    
    for(int i = digitsSize - 1; i >= 0; --i) {
        
        // Add 1 to the current digit and break, 
        if(digits[i] + 1 != 10) {
            digits[i] = digits[i] + 1; 
            break;
        } 
        else if(digits[i] + 1 == 10 && i != 0) 
            digits[i] = 0;
        
        
        // Add one more index to the array
        if(i == 0 && digits[i] + 1 == 10) {
            digits[i] = 1;
            newSize++;
            break;
        }
        
    }
    
    // Set the size of the value being returned.
    *returnSize = newSize;
    
    // Add a zero to the end of the array,
    if(newSize > digitsSize) {
        returnResult = malloc(sizeof(int) * newSize);
        for(int i = 0; i < newSize; ++i) {
            if(i < digitsSize) 
                returnResult[i] = digits[i];
            else
                returnResult[i] = 0;
        }
    } 
    else {
        returnResult = malloc(sizeof(int) * newSize);
        for(int i = 0; i < newSize; ++i) {
            returnResult[i] = digits[i];
        }
    }
    
    
    
    return returnResult;
}