#include <cstdio>
#include <cstring>
#include <vector>
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;

char word1[1004];
char word2[1004];
int cache[1004][1004];
vector <char> v;

void backTracking(int m,int n){
	if (m==0 || n==0) return;
	if (cache[m][n] > cache[m-1][n-1] && cache[m][n] > cache[m][n-1] && cache[m][n] > cache[m-1][n]){
		v.push_back(word2[n-1]);
		backTracking(m-1,n-1);
	} else if (cache[m][n] > cache[m-1][n] && cache[m][n] == cache[m][n-1]){
		backTracking(m,n-1);
	} else {
		backTracking(m-1,n);
	}
}

int main(void){
	scanf("%s %s",word1,word2);
	int size1 = strlen(word1);
	int size2 = strlen(word2);

	for (int i=1;i<=size1;i++){
		for (int j=1;j<=size2;j++){
			if (word1[i-1]==word2[j-1]){
				cache[i][j] = cache[i-1][j-1] + 1;
			} else {
				cache[i][j] = max(cache[i][j-1],cache[i-1][j]);
			}
		}
	}

	printf("%d\n",cache[size1][size2]);
	backTracking(size1,size2);
	for (int i=v.size()-1;i>=0;i--){
		printf("%c",v[i]);
	}
	putchar('\n');
	return 0;
}
