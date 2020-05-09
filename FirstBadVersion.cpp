// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int inicio = 1, fim = n;
        while(inicio < fim){
            int meio = inicio / 2 + fim / 2;
            if(isBadVersion(meio) && !isBadVersion(meio-1)){
                return meio;
            }
            else if(!isBadVersion(meio)){
                inicio = meio + 1;
            }
            else if(isBadVersion(meio)){
                fim = meio - 1;
            }
        }
        if(inicio == fim && isBadVersion(inicio)){
            return inicio;
        }
        return 0;
    }
};
