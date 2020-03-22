int Solution::search(const vector<int> &A, int B) {
    int low = 0, high = A.size()-1;
    while(low<=high) 
    {
        int mid = low + (high-low)/2;
        if(B==A[mid])
            return mid;
        //This condition checks if our next iteration should move to the right side of the array.
        //The first check is the traditional Binary search check.
        //The OR condition exists to handle the rotation.
        //If A[mid] > A[high] it implies the rotation occurs to the right
        //If B <= A[high] it implies that the value exists in the rotated segment of the array (right side of middle value)
        if(B > A[mid] || (A[mid] > A[high] && B<=A[high]))
        {
            low = mid+1;
        }
        else
        {
            high = mid -1;
        }
    }
    return -1;
}

