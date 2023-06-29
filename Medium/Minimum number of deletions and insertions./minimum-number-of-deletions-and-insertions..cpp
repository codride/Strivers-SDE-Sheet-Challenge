//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int lcs(string &s1, string &s2)
    {
        int n = s1.size();
        int m = s2.size();

        vector<vector < int>> dp(n + 1, vector<int> (m + 1, -1));
        for (int i = 0; i <= n; i++) dp[i][0] = 0;
        for (int i = 0; i <= m; i++) dp[0][i] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = 0 + max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[n][m];
    }

	int minOperations(string str1, string str2) 
	{ 
	    return str1.size()+ str2.size() - 2*lcs( str1, str2);
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends