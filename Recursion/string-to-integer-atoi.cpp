#include<string>
using namespace std;
class Solution {
    public:
        int myAtoi(string s) {
            int i=0; long long int ans=0; int sign=1;
            while(i<s.size()&&s[i]==' ')i++;
            if(i==s.size())return 0;
    
            if(s[i]=='-'){
                sign=-1;
                i++;
            }
            else if(s[i]=='+')i++;
    
            while(i<s.size()&& isdigit(s[i])){
                ans=ans*10+(s[i]-'0');
                if(sign*ans>INT_MAX)return INT_MAX;
                if(sign*ans<INT_MIN)return INT_MIN;
                i++;
            }
            return (int)(sign*ans);
        }
    };