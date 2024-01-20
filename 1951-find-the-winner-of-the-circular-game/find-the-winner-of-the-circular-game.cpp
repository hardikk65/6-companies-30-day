class Solution {
public:
    int findTheWinner(int n, int k) {
        
        vector<int> friends;
        for(int i = 1;i <= n;i++){
            friends.push_back(i);
        }

        int start = 0;
        while(friends.size() != 1){

            int final_remove = (start + k - 1)%friends.size();

            start = (start + k)%friends.size();
            friends.erase(friends.begin() + final_remove);
            if(start != 0){
                start = start - 1;
            }

        }


        return friends[0];
        
    }
};