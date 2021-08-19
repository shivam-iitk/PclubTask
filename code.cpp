#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int i,x,N,K,g,a,b,s,j;
	cin>>x;          //number of test cases
	for(i=0;i<x;i++)
	{
	    cin>>N>>g>>K;          //takes input
	    s=0;        //for storing final answer
	    a=g%K;         //stores remainder
	    b=(N/K)*K;         //stores last multiple of K within range of 0 to (N-1)
	    j=b/K;         //number of times each remainder less than a would be repeating in range 0 to b
	    s=j*a;         //total numbers with remainder less than a
	    s=s+g/K;         //answer has the number upto b and not beyond it
	    s=s+min(a,N%K);         //adding numbers from (b+1) to (N-1) which heve remainder less than a
	    cout<<s+1<<endl;         //printing final answer after incrementing 1, so we also include g
	}
	return 0;
}
