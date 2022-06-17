char * longestCommonPrefix(char ** strs, int strsSize){
    
    char* prefix[250];
    int n = 0, len = 0; 
     
    for(int i = 0; i < strsSize; i++) {    
        
        n = 0;
        
        if(strs[i][n] == '\0') return "";
        
        while(n < 255) {
        
            if(i == 0) {
                prefix[n] = strs[i][n];
                if(strs[i][n] == '\0') {
                    break;
                }
            }
            else {
                if(strs[i][n] != prefix[n]) {
                    prefix[n] = '\0';
                    break;
                }
                if(strs[i][n] == '\0') break;
            }
            n++;
        }
    }
    
    n = 0;   
    while(prefix[n] != '\0') {
        len++;
        n++;
    }
                
    char* resultPrefix = malloc(sizeof(char) * (len + 1));
    
    n = 0;
    while(n <= len) {
        resultPrefix[n] = prefix[n];
        if(prefix[n] = '\0') resultPrefix[n] = '\0';
        n++;
    }
    
    return resultPrefix;
    
}