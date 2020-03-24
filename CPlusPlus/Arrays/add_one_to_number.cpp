vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> result;
    bool carry = false;
    for (int i = A.size() - 1; i>=0; i--) {
        if (A[i]!=9) 
        {
            A[i]+=1;
            carry = false;
            break;
        }
        else 
        {
            A[i]=0;
            carry = true;
        }
    }
    //When we have carry after last digit, we need to start result with '1'
    if(carry == true) 
    {
        result.push_back(1);
        int i = 0;
        while(i<A.size())
        {
            result.push_back(A[i]);
            i++;
        }
    }
    else 
    {   //Starting with -1 for pre-increment operator. Also the while loop checks for
        //zeroes before the most significant digit and skips those
        int i = -1;
        while(A[++i]==0)
            continue;
        while(i<A.size()){
            result.push_back(A[i]);
            i++;
        }
    }
    return result;
}

