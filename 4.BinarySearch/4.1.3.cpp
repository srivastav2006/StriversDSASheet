
class Solution {
  public:
    vector<int> getFloorAndCeil(int k, vector<int> &a) {
        sort(a.begin(),a.end());
     int f=-1,s=-1;
     int l=0,h=a.size()-1;
     while(l<=h){
         int mid=l+(h-l)/2;
         if(a[mid]<k){
             f=a[mid];
             l=mid+1;
         }
         else if(a[mid]>k){
             s=a[mid];
             h=mid-1;
         }
         else{
             return {k,k};
         }
     }
     return {f,s};
    }
};