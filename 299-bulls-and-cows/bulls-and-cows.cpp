class Solution {
public:
    string getHint(string secret, string guess) {

        map<char,int> secret1;
        map<char,int> guess1;

        for(int i = 0;i < secret.size();i++){
            secret1[secret[i]]++;
        }
        for(int i = 0;i < guess.size();i++){
            guess1[guess[i]]++;
        }

        int cows = 0;
        int bulls = 0;

        for(auto x: secret1){
            if(guess1[x.first] != 0){
                cows = cows + min(x.second,guess1[x.first]);
            }
        }

        for(int j = 0;j < secret.size();j++){
            if(secret[j] == guess[j]){
                bulls++;
            }
        }

        cows = cows - bulls;

        string c = to_string(cows);
        string b = to_string(bulls);

        string answer = b + "A" + c + "B";
        // cout<<cows<<" "<<bulls<<endl;
        return answer;
    }
};