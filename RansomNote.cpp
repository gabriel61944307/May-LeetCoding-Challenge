class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine[0] == NULL && ransomNote[0] != NULL || ransomNote.length() > magazine.length()) return false;
        int usadas[magazine.length()];
        for(int i = 0; i < magazine.length(); i++){
            usadas[i] = 0;
        }
        
        int rans = 0, maga = 0;
        while(rans < ransomNote.length()){
            int aux = rans;
            for(int i = 0; i < magazine.length(); i++){
                if(ransomNote[rans] == magazine[i] && usadas[i] == 0){
                    usadas[i] = 1;
                    rans++;
                    i = magazine.length();
                }
            }
            if(aux == rans){
                return false;
            }
        }
        
        return true;
        
    }
};
