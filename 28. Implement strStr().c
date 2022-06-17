int strStr(char * haystack, char * needle){
    
    int i = 0, n = 0;
    char* substring = strstr(haystack, needle);
    
    if(substring != NULL) {
        while(haystack[i] != '\0') {
            if(haystack[i] == substring[0]) {
                n = 0;
                while(substring[n] != '\0') {
                    if(substring[n] == haystack[i + n]) {
                        n++;
                    }
                    else break;
                    
                    if(n == strlen(substring)) return i;
                }
            }
            i++;
        }
    }
    
    return -1; 
}