class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int confiados[N+1], confiantes[N+1], resp = 0;
        
        for(int i = 0; i <= N; i++){
            confiados[i] = 0;
        }
        for(int i = 0; i <= N; i++){
            confiantes[i] = 0;
        }
        
        for(int i = 0; i < trust.size(); i++){
            confiados[trust[i][1]]++;
        }
        for(int i = 0; i < trust.size(); i++){
            confiantes[trust[i][0]]++;
        }
        
        int aux = 0;
        for(int i = 0; i <= N; i++){
            if(confiados[i] == N-1){
                resp = i;
                aux = 1;
            }
        }
        if(confiantes[resp] == 0 && aux){
            return resp;
        }
        return -1;
        
    }
};
