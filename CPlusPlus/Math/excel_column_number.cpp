//Just think of this problem as numbers in a different base system
//The objective here is to translate base 26 to base 10
int Solution::titleToNumber(string A) {
    int len = A.length() - 1;
    int ans = 0;
    
    for(int i =0; i<=len; i++) {
        ans = ans + pow(26, len - i)*(A[i] - 'A' + 1);
    }
    return ans;
}

