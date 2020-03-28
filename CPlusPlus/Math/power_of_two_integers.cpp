//Think about logarithms and check log(A)/log(B) formulas
//So log(A)/log(i) will give a value say 'c'. If i^c is 
//equal to A then we have found the two numbers and we return
//true. Otherwise at the end of the iteration when we come out
//we return false;
int Solution::isPower(int A) {
    if(A<=1)
        return 1;
    
    for(int i = 2; i<=sqrt(A); i++) {
        int logv = log(A)/log(i);
        if(pow(i,logv)==A)
            return 1;
    }
    return 0;
}

