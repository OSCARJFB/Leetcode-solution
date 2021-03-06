int countPrefixes(char ** words, int wordsSize, char * s) {
    
    int letter = 0, word = 0;
    int prefixCounter = 0;
    
    for(int i = 0; i < wordsSize; ++i) {
        while(words[i][word] != '\0') {
            while(letter <= strlen(s)) {
                if(s[letter] != words[i][word]) 
                    break;

                letter++;
                break;
            }

            word++;

        }

        if(letter > 0 && letter >= word)
            prefixCounter++;
        
        letter = 0;
        word = 0;
    }

    return prefixCounter;
}
     
      