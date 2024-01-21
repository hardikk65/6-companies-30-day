class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        map <string,int> str;

        int str_min = INT_MAX;

        for(int i = 0;i < strs.size();i++){
            if(strs[i].size() < str_min){
                str_min = strs[i].size();
            }
        }

        for(int window = str_min; window >= 0;window--){
            str[strs[0].substr(0,window)]++;

            cout<<strs[0].substr(0,window)<<endl;

            for(int p = 1; p < strs.size();p++){
                if(str[strs[p].substr(0,window)] == 0){
                    break;
                }
                else{
                    str[strs[p].substr(0,window)]++;
                }
            }

            if(str[strs[0].substr(0,window)] == strs.size()){
                return strs[0].substr(0,window);
            }
            str.clear();

        }

        return "";







        
    }
};