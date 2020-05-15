class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> to_process;
        for (auto c : num) {
            while (!to_process.empty() && k > 0 && to_process.top() > c) {
                to_process.pop(), --k;
            }
            // skip leading zeros
            if (to_process.empty() && c == '0') continue;
            to_process.emplace(c);
        }
        
        if (to_process.empty()) return "0";
        for (int i = 0; i < k; ++i) to_process.pop();

        string result(to_process.size(), ' ');
        int i = to_process.size() - 1;
        while (i >= 0) {
            result[i--] = to_process.top();
            to_process.pop();
        }
        
        return !empty(result) ? result : "0";
    }
};
