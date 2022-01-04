#include<iostream>
using namespace std;
int main() {
	int n,i,j,k,sum1=0,sum2=0,sum3=0;
	cin>>n;
	int a[3][n];
		for (k=0; k<n; k++) {
			for (j=0; j<3; j++) {
				cin>>a[j][k];
			}
		}
		for (j=0; j<n; j++) {
			sum1=sum1+a[0][j];
			sum2=sum2+a[1][j];
			sum3=sum3+a[2][j];
		}
		if(sum1==0&&sum2==0&&sum3==0) 
			cout<<"YES";
		else
			cout<<"NO";
	
	return 0;
}
