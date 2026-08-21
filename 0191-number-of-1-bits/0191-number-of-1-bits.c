int hammingWeight(int n) {
    int one_c = 0;
    

    while (n > 0) {
        if (n % 2 == 1) {
            one_c++;
        }

        n = n / 2;
    }
    return one_c;
    
}