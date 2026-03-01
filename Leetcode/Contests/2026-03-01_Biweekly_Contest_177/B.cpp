class Solution {
public:
    string mergeCharacters(string s, int k) {
        string a=s;
        while(true){
            bool flag=false;
            for(int i=0 ; i<a.size() ; i++){
                for(int j=i+1; j<a.size() && j-i<=k ; j++){
                    if(a[i]==a[j]){
                        a.erase(j,1);
                        flag=true;
                        break;
                    }
                }
                if(flag) break;
            }
            if(!flag) break;
        }
        return a;
    }
        
    
};
