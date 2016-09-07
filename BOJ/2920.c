#include <cstdio>
int cache[8];
bool as(void){
	for (int i=0;i<8;i++){if (cache[i]!=i+1){return false;}}
	return true;}
bool de(void){
	for (int i=0;i<8;i++){if (cache[i]!=8-i){return false;}}
	return true;}
int main(void){
	for (int i=0;i<8;i++){scanf("%d",&cache[i]);}
	if (as()){printf("ascending\n");}
	else if (de()){printf("descending\n");}
	else {printf("mixed\n");}
	return 0;
}