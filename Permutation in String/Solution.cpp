class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        if(n1>n2) return false;
        int store[26]={0};
        for(char c: s1)
            store[c-'a'] +=1;

        for(int i=0; i<n1; ++i)
            store[s2[i]-'a'] -=1;
        
        bool ans=true;
        int start=0;
        for(int x: store){
            if(x!=0){
            ans=false;
            break;
            }
        }
        if(ans) return true;
        start++;
        while(start<=n2-n1){
             // store[s2[start-1]-'a']++;
             // store[s2[start+n1-1]-'a']--;;
            int toRemove = s2[start-1]-'a';
            int toAdd = s2[start+n1-1]-'a';
            store[toRemove] +=1;
            store[toAdd] -=1;
            ans=true;
            for(int x: store){
                if(x!=0){
                ans=false;
                break;
            }
        }
        if(ans) return true;
        start++;
        }
        return false;
        
    }
};