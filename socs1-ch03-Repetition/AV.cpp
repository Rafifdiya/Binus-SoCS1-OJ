#include <stdio.h>

void coba(){
	int n;
	scanf ("%d", &n);
	int ans = 0;
	for (int i = 0; i <= n; i++){
		for (int j = 0; j <= n; j++){
			if (i + j <= n)ans++;
			else break;
		}
	}
	int ans2 = (n + 2) * (n + 1) / 2;
	printf ("%d\n", ans);
	return;
}

int main (){
	coba();
	return 0;
}

