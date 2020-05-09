class Solution {
public:
    int firstUniqChar(string s) {
        int letras[256];
        for(int i = 0; i < 256; i++){
            letras[i] = 0;
        }
        
        for(int i = 0; i < s.length(); i++){
            for(int j = i+1; j < s.length(); j++){
                if(s[i] == s[j]){
                    letras[s[i]] = 1;
                    j = s.length();
                }
            }
            if(letras[s[i]] == 0){
                return i;
            }
        }
        return -1;
    }
};
