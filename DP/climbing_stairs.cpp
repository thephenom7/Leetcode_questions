class Solution {
public:
    int climbStairs(int n) {
        n=n+1;
        if(n<=1)return n;
        int arr[n+1];
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<=n;i++)
            arr[i]=arr[i-1]+arr[i-2];
        return arr[n];
        
        
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int n = stringToInteger(line);
        
        int ret = Solution().climbStairs(n);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}
