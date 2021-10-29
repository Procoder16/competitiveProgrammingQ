#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        string s1="1",s2="1";
        for(int i=1;i<s.size();i++){
            if(s[i]=='2'){
                if(s1==s2){
                    s1+='1';
                    s2+='1';
                }
                else if(s1<s2){
                    s1+='2';
                    s2+='0';
                }
                else if(s1>s2){
                    s1+='0';
                    s2+='2';
                }
            }
            else if(s[i]=='1'){
                if(s1==s2){
                    s1+='1';
                    s2+='0';
                }
                else if(s1<s2){
                    s1+='1';
                    s2+='0';
                }
                else if(s1>s2){
                    s1+='0';
                    s2+='1';
                }
            }
            else if(s[i]=='0'){
                s1+='0';
                s2+='0';
            }
        }
       cout<<s1<<endl<<s2<<endl;
    }
}