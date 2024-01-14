class Solution {
public:
    string categorizeBox(long length, long width, long height, long mass) {
        long volume = length*width*height;
        bool b = (length >= 10000 || width >= 10000) || height >= 10000 || volume >= 1000000000;
        bool a = mass >= 100;
        string ans;

        if (a && b)
        {
            ans = "Both";
        }
        else if (!a && !b)
        {
            ans = "Neither";
        }
        else if (!a && b)
        {
            ans = "Bulky";
        }
        else if (a && !b)
        {
            ans = "Heavy";
        }

        return ans;

    }
};
