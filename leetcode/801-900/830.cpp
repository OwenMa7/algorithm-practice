// 大于或等于三个连续字符 较大分组

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        int n = s.size();
        char prev = '0';
        for(int i = 0;i<n;++i)
        {
            prev = s[i];
            int j = i;
            while(j<n&&s[j]==prev)
            {
                 ++j;
            }
            --j;
            if(j-i+1>=3)
                res.push_back({i,j});
            i = j;
        }
        return res;
    }
};
