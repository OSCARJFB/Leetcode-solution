int lengthOfLastWord(char * s){
    
    int lenLast = 0, len = 0;
    int i = 0; 
    
    while(s[i] != '\0') {
       if((int)s[i] != 32)
           len++;
       else if((int)s[i] == 32) {
           if(len != 0)
              lenLast = len;
               
           len = 0;
       } 
              
       i++;
    }
    if(len != 0)
        lenLast = len;
    
    return lenLast;
}