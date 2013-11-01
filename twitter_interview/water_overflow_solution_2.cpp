#include<stdio.h>
#include<stdlib.h>

int main(void){
	int N;
	int i, j;
	int lefth, righth;
	do{
		scanf("%d", &N);
		if (N <= 0)break;
		int* height = (int *) malloc(sizeof(int) *N);
		for (i = 0; i < N; i++)
			scanf("%d", &height[i]);
		lefth = height[0];
		righth = height[N - 1];
		int total = 0;
		i = 0;
		j = N - 1;
		for (;;){
			if (i >= j)break;
			if (lefth <= righth){
				while (height[++i] < lefth)
					total += lefth - height[i];
				lefth = height[i];
			}
			else{
				while (height[--j] < righth)
					total += righth - height[j];
				righth = height[j];
			}
		}
		printf("%d\n", total);
	} while (true);
	
	return 0;
}