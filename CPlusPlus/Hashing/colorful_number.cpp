//Worst Case Time Complexity: O(n^2), Space Complexity: O(n^2)
//Logic: The inner loop progressively calculates the product of each
//subsequence starting from the number pointed to by the outside loop.
//The calculated product is stored in a hash map. A hash set(unordered_set) 
//can also be used for this purpose along with it's find method(it has avg O(1)
//time complexity. Whenever we have a repeat product, the count of that product
//would increase to more than 1 which means the number is not colorful. 
int Solution::colorful(int A) {
    string s = to_string(A);
    unordered_map<long long, int> m;
    for(int i = 0; i<s.length(); i++){
        long long temp = 1;
        //Progressively calculating and storing subsequence products
        for(int j = i; j<s.length(); j++){
            temp = temp*(s[j] - '0');
            m[temp]+=1;
            if(m[temp]>1)
                return 0;
        }
    }
    return 1;
}

