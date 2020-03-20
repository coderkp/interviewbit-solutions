//Right shift of the bits or performing AND bit-wise might seem as possible approaches
//but they definitely aren't the optimal approach to solve this question.
//Think of the bit relationship between consecutive numbers. For example:
//[5- 101, 4 - 100], [8- 1000, 7 - 0111]
//Notice if you perform AND of a number and (number - 1), the result has one '1' bit less
//So in this method of solving, with every cycle we reduce one '1' bit, hence optimizing
//the counting process.
int Solution::numSetBits(unsigned int A) {
    if(A==0)
        return 0;
    int count = 1;
    while((A&(A-1)) != 0) {
        A &= (A-1);
        count++;
    }
    return count;
}

