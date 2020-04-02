//Objective: For a given array/vector we have to generate all the possible subsets

//getSubsets is a recursive function to generate all the subsets. Solution gets
//stored in a vector of vectors which is passed by reference to this method
void getSubsets(vector<vector<int>> &sol, vector<int> &subset, int index, vector<int> &A) {
    //In the first iteration, the push statement pushes an empty subset.
    //There after, we push the value from the previous iteration every time
    //The logic here is: Fix a character and generate it's subsets. 
    sol.push_back(subset);
    for(int i = index; i<A.size(); i++) {
        //Fix a character
        subset.push_back(A[i]);
        //Get all subsets recursively with the character fixed
        getsubsets(sol, subset, i+1, A);
        //Remove the fixed character and go for the next iteration to
        //fix the next character.
        subset.pop_back();
    }
    return;
    
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    //We sort the input to ensure a sorted output
    sort(A.begin(), A.end());
    vector<vector<int> > sol;
    vector<int>subset;
    int index = 0;
    //Calling our recursive method
    getsubsets(sol, subset, index, A);
    
    return sol;
}

