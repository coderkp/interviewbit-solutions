//Do not confuse yourself by thinking of this as a sliding window type of problem.
//There is NO NEED to maintain a window in this. All you need to do is:
//At a given element, check whether the sum at that point is greater than that element.
//And accordingly update the greater value in current maximum(currmax) and
//update maximum seen so far (maxsofar) if currmax is greater than maxsofar
int Solution::maxSubArray(const vector<int> &A) {
    int currmax = A[0];
    int maxsofar = A[0];
    for(int i = 1; i<A.size(); i++) {
        currmax = max(A[i], currmax + A[i]);
        maxsofar = max(maxsofar, currmax);
    }
    return maxsofar;
}

