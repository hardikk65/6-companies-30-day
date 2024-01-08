class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {

        unordered_map <string,int> freq;
        vector<string> employees;
        vector<string> ans;
        for(int i = 0;i < access_times.size();i++){
            freq[access_times[i][0]]++;
        }

        for(auto it: freq){
            cout<<it.first<<" "<<it.second<<endl;
            if(it.second >= 3){
    
                employees.push_back(it.first);
            }
        }

        for(int j = 0;j < employees.size();j++){
            vector<int> hours2;
            vector<int> hours1;
            int count = 0;
            for(int i = 0;i < access_times.size();i++){
                if(access_times[i][0] == employees[j]){
                    char h1 = access_times[i][1][0];
                    int _h1 = (h1 - 48)*10;
                    char h2 = access_times[i][1][1];
                    int _h2 = h2 - 48;

                    int hours = _h1 + _h2;

                    int h_m = hours*60;

                    char m1 = access_times[i][1][2];
                    int _m1 = (m1 - 48)*10;

                    char m2 = access_times[i][1][3];
                    int _m2 = (m2 - 48);

                    int minutes = _m1 + _m2;

                    int total_minutes = h_m + minutes;

                    int seconds = total_minutes*60;

                    // cout<<seconds<<endl;

                    hours1.push_back(seconds);
                }
            }

            sort(hours1.begin(),hours1.end());


            for(int h = 0;h < hours1.size() - 2;h++){
                if(hours1[h + 2] - hours1[h + 1] < 3600){
                    if(hours1[h + 1] - hours1[h] < 3600){
                        if(hours1[h + 2] - hours1[h] < 3600){
                            ans.push_back(employees[j]);
                            break;
                        }
                    }
                }
            }



        }

        return ans;

        

        
    }
};