#include <algorithm>

class Solution {
public:
    vector<int> twoSum (std::vector<int>& nums, int target) {
        std::map<int, int> m;
        
        // for each element in list, compute diff with target and check if we already
        // visited an element in the nums list whose value is diff
        // We can store all visited elements in a map so that access time is (roughly) O(1).
        for (int i = 0; i < nums.size (); i++)
        {
            int diff = target - nums[i];
            if (m.find (diff) != m.end ())
                return {i, m[diff]};

            m[nums[i]] = i;
        }
        
        // should never reach here as there is always a solution
        // as promised by the question
        return {0, 0};
    }
};