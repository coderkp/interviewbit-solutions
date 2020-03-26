//The brute force approach to simply iterate and find two numbers that
//are prime and add up to the desired sum is inefficient especially 
//because it is costly to check primes in each step.
//Instead we calculate the primes beforehand using the Sieve of
//Eratosthenes method. After constructing the sieve which takes
//O(A) space and O(sqrt(A)) time, finding the solution takes further 
//only O(A) time as accessing the sieve(boolean array) is constant time.
vector<int> Solution::primesum(int A) {
    //Sieve bool array
    bool *sieve = new bool[A+1];
    //Initialising statements
    fill_n(sieve, A+1, true);
    sieve[0] = false;
    sieve[1] = false;
    vector<int> solution;
    //Constructing the Sieve
    for(int i = 2; i<=sqrt(A+1); i++) {
        if(sieve[i] == false)
            continue;
        for(int j = i+i; j<=A; j+=i)
            sieve[j] = false;
    }
    //Iterating over the sieve to find the solution
    for(int i = 2; i<=A; i++) {
        //For each 'i' we simply check if 'A-i' is also prime.
        //So we don't need to explicitly check for the sum equals A.
        if(sieve[i] == true && sieve[A-i] == true) {
            solution.push_back(i);
            solution.push_back(A-i);
            break;
        }
    }
    return solution;
}

