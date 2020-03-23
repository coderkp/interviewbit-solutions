int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    //Since we can move in all 8 directions from a cell, the number of
    //moves required to go from one cell to another is defined by the
    //maximum of horizontal or vertical distance between the two
    //i.e. max(x1-x2, y1-y2)
    int steps = 0;
    for(int i = 1; i<A.size(); i++) {
        int stx = A[i-1], sty = B[i-1];
        steps = steps + max(abs(A[i]-stx), abs(B[i] - sty));    
    }
    return steps;
}

