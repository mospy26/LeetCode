class Solution {
public:
    bool isHappy(int n) 
    {
        for (int i = 0; i <= 8; i++)
        {
            n = sumOfSquares (n);
            if (n == 1)
                return true;
        }
        return false;
    }
    
    int sumOfSquares (int n) 
    {
        int sum = 0;
        while (n != 0) 
        {
            sum += std::pow (n % 10, 2);
            n /= 10;
        }
        
        return sum;
    }
};