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
        std::vector<int> digits;
        int digit;
        while (n != 0) 
        {
            digit = n % 10;
            digits.push_back (digit);
            n /= 10;
        }
        
        int sum = 0;
        for (int num : digits)
        {
            sum += std::pow (num, 2);
        }
        
        return sum;
    }
};