class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int arr[coins.size()+1][amount+1];
        for(int i=1;i<=amount;i++)
        {
            arr[0][i]=0;
        }
        for(int i=0;i<=coins.size();i++)
        {
            arr[i][0]=1;
        }
        for(int k=1;k<=coins.size();k++)
        {
            int i=coins[k-1];
            for(int j=1;j<=amount;j++)
            {
               // cout<<" sp "<<arr[0][j]<<" ";
                if(i>j)
                {
                    arr[k][j]=arr[k-1][j];
                }
                else
                {
                    arr[k][j]=arr[k-1][j]+arr[k][j-i];
                }
               // cout<<arr[i][j]<<" ";
            }cout<<endl;
        }
        return arr[coins.size()][amount];
        
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

int main() {
    string line;
    while (getline(cin, line)) {
        int amount = stringToInteger(line);
        getline(cin, line);
        vector<int> coins = stringToIntegerVector(line);
        
        int ret = Solution().change(amount, coins);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}
