int Solution::gcd(int A, int B) {
    while(B!=0)
    {
        int r = A%B;
        A = B;
        B = r;
    }
    return A;
}