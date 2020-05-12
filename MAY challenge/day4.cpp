class Solution {
public:
    int i=0;
    int bin[32];
    void toBinary(int n)
    {
        while(n>0)
        {
            bin[i]=n%2;
            n=n/2;
            i++;
        }
    }
    int findComplement(int num) {
        int sum=0;
        toBinary(num);
        for(int j=0;j<i;j++){
        if(bin[j]==0)
        {
            sum=sum+pow(2,j);
        }
        }
        return sum;
        
    }
};