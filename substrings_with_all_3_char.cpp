class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> result(3,0);
        int i=0,j=0;
        int c=0;
        for(j=0;j<s.size();j++){
            result[s[j]-'a']++;
            while(result[0] && result[1] && result[2]){
                c=c+1+(s.size()-1-j);
                result[s[i]-'a']--;
                i++;
            }
        }
        return c;
    }
};
