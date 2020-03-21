vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int> > sol;
    //Created set to weed out duplicates
    set<vector<int> > tsol;
    //There will be no solution if we have less than 3 values
    if (A.size() < 3)
        return sol;
    
    sort(A.begin(), A.end());
    //'i' selects the element, 'j' & 'k' act as 2 pointers
    for(int i = 0; i<A.size(); i++) {
        int j = i+1;
        int k = A.size() - 1;
        while(j<k) {
            if((A[i] + A[j] + A[k]) == 0) {
                vector<int> temp;
                temp.push_back(A[i]);
                temp.push_back(A[j]);
                temp.push_back(A[k]);
                tsol.insert(temp);
                j++;
                k--;
            }
            //If the sum is negative, move ahead 'j' to a lesser negative/more positive value
            else if ((A[i] + A[j] + A[k]) < 0)
                j++;
            else
                k--;
        }
    }
    //Copies values from set 'tsol' into vector<vector>
    copy(tsol.begin(), tsol.end(), back_inserter(sol));
    return sol;
}

