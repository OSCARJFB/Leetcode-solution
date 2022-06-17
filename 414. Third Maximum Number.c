void sortArray(int*, int); 
void findValues(bool*, int*, int, int*, int*);

int thirdMax(int* nums, int numsSize) {
    
    int maximum = 0, third = 0;
    bool foundThird = false;
    
    sortArray(nums, numsSize);
    findValues(&foundThird, nums, numsSize, &third, &maximum); 
    
    if(foundThird == true)
        return third;
    else
        return maximum;
}

void sortArray(int* nums, int numsSize) {
    
    int temp = 0; 
    
    for(int i = 0; i < numsSize; ++i) {
        for(int j = i + 1; j < numsSize; ++j){
            if(nums[i] > nums[j]) {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
}


void findValues(bool* foundThird,
                int* nums,  int numsSize, 
                int* third, int* maximum) {
    
    int counter = 1;
    
    *maximum = nums[numsSize -1];
    for(int i = numsSize - 2; i >= 0; --i) {
        if(nums[i] != nums[i + 1]) {
            counter++;
        }
        if(counter == 3) {
            *third = nums[i];
            *foundThird = true;
        }
    }
    
    return; 
}