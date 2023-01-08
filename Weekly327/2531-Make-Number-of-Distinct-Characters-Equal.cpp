class Solution {
public:
    bool isItPossible(string w1, string w2) {
        unordered_map<char, int> m1, m2;
        for(char c : w1) m1[c]++;
        for(char c : w2) m2[c]++;

        for(char i='a'; i<='z'; i++) {
            for(char j='a'; j<='z'; j++) {
                if(m1.find(i) == m1.end() || m2.find(j) == m2.end()) continue;
                if(!--m1[i]) m1.erase(i);
                m2[i]++;
                if(!--m2[j]) m2.erase(j);
                m1[j]++;
        
                if(m1.size() == m2.size()) return true;

                m1[i]++;
                if(!--m2[i]) m2.erase(i);
                m2[j]++;
                if(!--m1[j]) m1.erase(j);
            }
        }
        return false;
    }
};