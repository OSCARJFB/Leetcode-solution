bool isPalindrome(int x){
    
    int calc = x, num = 0, numberOfInts = 0;
    int i = 0, k = 0;
    int *numArray; 
    
    bool palindrome = false;
    
    // No negative numbers. 
    if(x < 0) return palindrome; 
    
    // If equal to 0 is number a palindrome? 
    if(x - calc == 0) { 
      
        // get number of digits.
        while(calc > 0) { 
            calc = calc / 10;
            numberOfInts++;
        }
        
        // Allocate an array depending on the number of digits.
        numArray = (int*)malloc(sizeof(int) * numberOfInts);
        
        // Add x to the array.
        calc = x;
        i = 0;  
        while(calc > 0) { 
            num = calc % 10;
            calc = calc / 10;
            numArray[i] = num;
            i++;  
        }
        
        // Loop array and check if palindrom.
        k = numberOfInts - 1;
        for(int i = 0; i < numberOfInts; i++)  {
            if(numArray[i] != numArray[k - i]) {
                goto exit;
            }
        }
        palindrome = true;
    }
    
    exit:
    
    // Remember to free memory, :D
    free(numArray);

    return palindrome;
}