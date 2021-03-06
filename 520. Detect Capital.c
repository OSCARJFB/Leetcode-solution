bool AllLetters(char*);
bool onlyFirstLetter(char*);
bool noCapital(char*);

bool detectCapitalUse(char * word){
    
    // ASCII num 65 - 90 represent capital letters. 
    // Check if words type cast is == ASCII equivalent of a capital letter.

    if(AllLetters(word) == true)
        return true;
    
    if(onlyFirstLetter(word) == true)
        return true;
    
    if(noCapital(word) == true)
       return true;

    return false;
}

bool AllLetters(char* word) {
    
    int i = 0;
    bool result = false;
    
    // All letters in this word are capitals, like "USA".
    while(i <= strlen(word)) {
        if((int)word[i] >= 65 && (int)word[i] <= 90) {
            i++;
        }
        else {
            return result;
        }

        if(i == strlen(word)) 
            result = true;
        
    }
    
    return result;
}

bool onlyFirstLetter(char* word) {
    
    int i = 1;
    bool result = false;
    
    // Only the first letter in this word is capital, like "Google".
    if((int)word[0] >= 65 && (int)word[0] <= 90) {
        while(i <= strlen(word)) {
            if((int)word[i] >= 65 && (int)word[i] <= 90) 
                    return result;
           
            if(i == strlen(word)) 
                result = true;

            i++;
        }

    }
    
    return result;
}

bool noCapital(char* word) {
    
    int i = 0;
    bool result = false;
    
    // All letters in this word are not capitals, like "leetcode".
    while(i <= strlen(word)) {
        if((int)word[i] >= 65 && (int)word[i] <= 90) 
          return false;
    
        if(i == strlen(word)) 
            result = true;
        
        i++;
    }
    
    return result;
}