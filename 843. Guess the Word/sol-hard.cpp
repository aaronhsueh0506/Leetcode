class Solution {
public:
    void findSecretWord(vector<string>& words, Master& master) {
        srand(time(0));

        for(int i=0, matches = 0; i < 30 and matches !=6 ; i++) {
            string trial = words[rand() % words.size()];

            matches = master.guess(trial);
            vector<string> t;
            
            for(auto word: words){
                if(match(trial, word)==matches){
                    t.push_back(word);
                }
            }
            words = t;
        }
    }

    int match(string& a, string& b){
        int count=0;
        for(int i=0; i<6; i++){
            if(a[i]==b[i]) count++;
        }
        return count;
    }
};
