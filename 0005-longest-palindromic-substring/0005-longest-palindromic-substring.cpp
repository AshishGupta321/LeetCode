class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()==0) return"";
        int start=0,end=0;
        for(int i=0;i<s.length();i++){
            int l=i;
            int r=i;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                if(r-l > end-start){
                    start=l;
                    end=r;
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                if(r-l > end-start){
                    start=l;
                    end=r;
        }
        l--;
        r++;
            }
    }
    return s.substr(start,end-start+1);
    }
};