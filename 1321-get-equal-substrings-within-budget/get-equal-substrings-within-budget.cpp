class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> cost;
        for(int i = 0;i < s.size();i++){
            cost.push_back(abs(s[i] - t[i]));
        }

        int start = 0;
        int sum = 0;
        int length = 0;
        int curr_length = 0;
        for(int i = 0;i < s.size();i++){
            sum += cost[i];
            curr_length++;
            if(sum <= maxCost){
                length = max(length,curr_length);
            }
            else{
                while(sum > maxCost){
                    sum = sum - cost[start];
                    start++;
                    curr_length--;
                }
            }
        }
        return length;
    }
};