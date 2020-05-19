class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
            int n1 = p.size();
            int n2 = s.size();
            vector<int> final;
            if(n1> n2) return final;
            vector<int> store(26,0);
           // vector<int> final;
            for(char c: p)  // Count the  frequency of every element in string p
                store[c-'a']++; 
            
            for(int i=0; i<n1; ++i) 
                store[s[i]-'a']--;
            
            int start=0;
            bool ans=true;
            for(int x: store){
                if(x!=0){
                    ans=false;
                    break;
                }
            }
            if(ans) final.push_back(start);
            start++;
            while(start<=n2-n1){
                store[s[start-1]-'a']++; // Increament the the count of element which we removed
                store[s[start+n1-1]-'a']--; // Decrement the count of element which we added
                ans=true;
                 for(int x: store){
                if(x!=0){
                    ans=false;
                    break;
                }
            }
            if(ans) final.push_back(start);
            start++;        
        } 
            return final;
     }
};