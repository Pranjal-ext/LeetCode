class Solution {
public:
    vector<int> generateRows(int n)
    {
        vector<int>temp;
        int el=1;
        temp.push_back(1);
        for(int i=1;i<n;i++)
        {
            el=el*(n-i);
            el=el/i;
            temp.push_back(el);
        }return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRows(i));
        }return ans;
        
    }
};