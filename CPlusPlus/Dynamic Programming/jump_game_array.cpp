//The logic is simple. To reach the end, you need to traverse
//the array. So as you iterate, greedily maximise your options
//at each step. Choose the best value among (previousValue - 1, currentValue).
//If the best value equals zero, it implies that there is no way you can cross
//that step. And as a result, there's no way you can reach the end.
int Solution::canJump(vector<int> &A) {
    int curr = A[0];
    int prev = curr;
    for(int i = 1; i<A.size(); i++){
        if(curr==0)
            return 0;
        curr = max(prev-1, A[i]);
        prev = curr;
    }
    return 1;
}
