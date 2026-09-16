class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapST[256]={0};
        int mapTS[256]={0};
        for(int i=0;i<s.size();i++){
            if(mapST[s[i]] !=0 && mapST[s[i]]!=t[i])
            return false;
            if(mapTS[t[i]] !=0 && mapTS[t[i]]!=s[i])
            return false;
            mapST[s[i]]=t[i];
            mapTS[t[i]]=s[i];
        }
        return true;
    }
};