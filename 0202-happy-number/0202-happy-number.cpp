class Solution {
public:
    bool isHappy(int n) 
    {
        int result;
        for (int i = 0; i <= 8; i++)
        {
            result = sumOfSquares (n);
            if (result == 1)
                return true;
            n = result;
        }
        return false;
    }
    
    int sumOfSquares (int n) 
    {
        int digit;
        int sum = 0;
        while (n != 0) 
        {
            digit = n % 10;
            sum += std::pow (digit, 2);
            n /= 10;
        }
        
        return sum;
    }
};