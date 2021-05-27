#include <bits/stdc++.h>
using namespace std;


int fib(int n) {
	int i = 0, j = 1, z = 1, k = 2, temp;
	for(int k = 2; k <= n; ++k) {
		temp = z;
		z = (i + j) % 1'000'000'000;
		i = j;
		j = z;
	}
	
	return z;
}


int main()
{
	int t, n;
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);
		printf("%d\n", fib(n));
	}

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	return 0;
}