class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int a=s.size();
        int b=t.size();
        int ac=min(a,b);
        while(s[i]==t[i] && ac--){
            i++;
        }
        if(a==b && b==i) return true;
        else return false;
    }
};
