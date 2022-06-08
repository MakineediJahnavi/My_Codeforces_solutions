// By Jahnavi_Makineedi, contest: Codeforces Round #797 (Div. 3), problem: (A) Print a Pedestal (Codeforces logo?), Accepted
#include<iostream>
using namespace std;
int main() {
   int t,n,x;
   cin>>t;
   for(int i=0; i<t; i++) {
      cin>>n;
      x=n-((n/3)*3);
      if(x==0) {
         cout<<n/3<<" "<<(n/3)+1<<" "<<(n/3)-1<<endl;
      }
      else if(x==1) {
         cout<<n/3<<" "<<(n/3)+2<<" "<<(n/3)-1<<endl;
      }
      else {
         cout<<(n/3)+1<<" "<<(n/3)+2<<" "<<(n/3)-1<<endl;
      }
   }
   return 0;
}
