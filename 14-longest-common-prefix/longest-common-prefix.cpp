class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // map <string,int> str;

        int str_min = INT_MAX;

        for(int i = 0;i < strs.size();i++){
            if(strs[i].size() < str_min){
                str_min = strs[i].size();
            }
        }

        for(int window = str_min; window >= 0;window--){
            string check = strs[0].substr(0,window);
            int count = 1;

            cout<<strs[0].substr(0,window)<<endl;

            for(int p = 1; p < strs.size();p++){
                if(strs[p].substr(0,window) != check){
                    break;
                }
                else{
                    count++;
                }
            }

            if(count == strs.size()){
                return check;
            }
            // str.clear();

        }

        return "";







        
    }
};