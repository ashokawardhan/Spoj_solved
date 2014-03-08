#include <iostream>
using namespace std;int main(){int tests,levels,n;unsigned long long sum;cin>>tests;while(tests--){cin>>levels;if(levels==1){printf("1\n");continue;}else if(levels%2==0){n=levels/2;sum=n*(n+1)*(4*n+1)/2;}else{n=(levels-1)/2;sum=(n+1)*(4*n*n+7*n+2)/2;}cout<<sum<<endl;}return 0;}
