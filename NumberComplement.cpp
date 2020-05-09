class Solution {
public:
    int findComplement(int num) {
        bitset<32> a;
        a = ~num;
        int elevado = 0, i = 0, resp = 0;
	    while(pow(2, elevado) < num){
		    if(a[i] == 1){
			    resp += pow(2, elevado);
		    }
		    elevado++;
		    i++;
	    }
        return resp;
    }
};
