#include <stdio.h>
#include <math.h>

int main(void) {
	int T,test_case;
	scanf("%d",&T);
	int ans[T][T];
	
	for (test_case = 0; test_case < T; test_case ++) {
		scanf("%d",&ans[test_case][0]);
		ans[test_case][1] = 1;
	}
	for (test_case = 0; test_case < T; test_case ++) {
		if (ans[test_case][0] == 1) {ans[test_case][1] = 0;}
		else {
			int cnt = (int)sqrt(ans[test_case][0]);
			for (int i = 2; i <= cnt; i ++) {
				if (ans[test_case][0]%i == 0) {
					ans[test_case][1] = 0;
					break;
				}
			}
		}
		if (ans[test_case][1] == 1) {
			printf("%s\n","Prime");
		} else {
			printf("%s\n","Not prime");
		}
	}
	return 0;
}