int Solution::reverse(int A) {
    bool flag = false;
    if(A<0)
    {
        A *= -1;
        flag = true;
    }
    int sum = 0;

    while(A!=0)
    {
        int rem = A%10;
        if (sum > INT_MAX/10 || sum == INT_MAX/10 && rem > INT_MAX%10)
            return 0;
        sum = sum*10 + rem;
        A /= 10;
    }
    
    if(flag)
        sum *= -1;
    return sum;
}