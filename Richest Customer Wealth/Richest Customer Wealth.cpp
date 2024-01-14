class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(auto& customer : accounts)
        {
            int currentWealth = 0;
            for(int balance : customer)
            {
                currentWealth += balance;
            }
            maxWealth = max(maxWealth,currentWealth);
        }
        return maxWealth;

    }
};
