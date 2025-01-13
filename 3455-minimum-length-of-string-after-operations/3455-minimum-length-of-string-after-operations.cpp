class Solution {
public:
    int minimumLength(string s) {
    if(s.size()<3){
        return s.size();
    }

    //agar frequency of char odd hogi toh hm sirf hm maximum hmm tab tak delete kar sakte hai jabtak 2 char na bache aur odd ke case jabtak ek na bache
    map<char,int>ans;
    for(char ch: s){
        ans[ch]++;
    }
    int count=0;
    for(auto &n : ans){
        if(n.second %2==0){
            count += 2;
        }
        else{
            count += 1;
        }
    }
    return count;
}

};