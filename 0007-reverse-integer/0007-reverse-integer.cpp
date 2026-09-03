class Solution {
public:
    int reverse(int x) {
        long long reverseno=0;
        while(x!=0){
            int ld=x%10;
            reverseno=(reverseno*10)+ld;
            x=x/10;
        }
        if(reverseno > INT_MAX || reverseno < INT_MIN)
            return 0;

        return reverseno;
    }
};