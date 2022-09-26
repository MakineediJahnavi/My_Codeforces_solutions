//MAKINEEDI JAHNAVI
#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--) {
      int n,c;
      cin>>n>>c;
      int a[n];
      for(int i=0; i<n; i++) {
         cin>>a[i];
      }
      sort(a,a+n);
      int j=1,k=0;
      for(int i=0; i<n-1; i++) {
         if(a[i]==a[i+1])
            j++;
         else {
            if(j<c) {
               k=k+j;
               j=1;
            }
            else {
               k=k+c;
               j=1;
            }
         }
      }
      if(j<c)
      k=k+j;
      else
      k=k+c;
      cout<<k<<endl;  
   }
   return 0;
}
