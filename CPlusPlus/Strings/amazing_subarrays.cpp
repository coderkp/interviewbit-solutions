//The most important point here is that we DO NOT NEED to generate subsets.
//If a character at position 'i' is a vowel, then it would generate
//(length - i) subsets. So the logic here is to simply iterate and identify
//if a character is a vowel and accordingly update the total.

//This method identifies if the passed character is a vowel
bool isSpecial(char a){
    //We convert the character to lower to avoid having unnecessary if conditions
    a = tolower(a);
    if(a==97 || a==101 || a==105 || a==111 || a==117) {
        return true;
    }
    return false;
}
int Solution::solve(string A) {
    int len = A.length();
    int ans = 0, mod = 10003;
    for(int i =0; i<len; i++) {
        if(isSpecial(A[i])){
            //Updating the total if character is special
            ans = (ans + len - i)%mod;
        }    
    }
    return ans;
}

