#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

int romanToInt(char * s){
    
    int i = 0, sum = 0;

    while(s[i] != '\0') {

        if(s[i] == 'I') {
            sum += I;
            goto end;
        } 
        if(s[i] == 'V') {
            sum += V; 
            if(i != 0 && s[i - 1] == 'I') sum = sum - (I * 2); // Subtract. 
            goto end;
        } 
        if(s[i] == 'X') {
            sum += X;
            if(i != 0 && s[i - 1] == 'I') sum = sum - (I * 2); // Subtract. 
            goto end;
        } 
        if(s[i] == 'L') {
            sum += L;
            if(i != 0 && s[i - 1] == 'X') sum = sum - (X * 2); // Subtract. 
            goto end;
            
        } 
        if(s[i] == 'C') {
            sum += C;
            if(i != 0 && s[i - 1] == 'X') sum = sum - (X * 2); // Subtract.
            goto end;
        } 
        if(s[i] == 'D') {
            sum += D;
            if(i != 0 && s[i - 1] == 'C') sum = sum - (C * 2); // Subtract.
            goto end;
        } 
        if(s[i] == 'M') {
            sum += M;
            if(i != 0 && s[i - 1] == 'C') sum = sum - (C * 2); // Subtract.
            goto end;
        }
       
        end: 
        i++;
    }
    
    return sum;
}