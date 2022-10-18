class Solution {
public:
    string helper(string s){
        int size = s.size(), cnt = 1;
        string ans = "";

        for(int i = 1; i < size; i++){
            if(s[i] == s[i - 1]) cnt++;

            else{
                ans.push_back(48 + cnt);
                cnt = 1;
                ans.push_back(s[i - 1]);
            }
        }

        ans.push_back(48 + cnt);
        ans.push_back(s[size - 1]);

        return ans;
    }

    string countAndSay(int n) {
    vector<string> hash(31);
    hash[1] = "1";

    for(int i = 2; i < 31; i++){
        hash[i] = helper(hash[i - 1]);
    }

        return hash[n];
    }
};

// Leetcode Question : https://leetcode.com/problems/count-and-say/description/
