class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int max = 0;
        int common = strs[0].length();
        for(int i = 0; i < strs.size()-1; i++){
            for(int j = 0; j < common; j++){
                if(strs[i][j] != strs[i+1][j]){
                    common = j;
                    break;
                }
                
            }
        }
        string ans = "";
        for(long long i =0; i < common; i++){
            ans += strs[0][i];
        }
        return ans;

        
    }
};