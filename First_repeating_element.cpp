//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        // code here
        map<int,int> mp;
        vector<int> v;
        for(int i=0; i<arr.size(); i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=i;
            }
            else{
                v.push_back(mp[arr[i]]);
            }
        }
        if(v.empty()){
            return -1;
        }
        int ans = *min_element(v.begin(),v.end());
        return ans+1;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.firstRepeated(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends