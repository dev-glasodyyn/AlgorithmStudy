#include <stdio.h>

main(){
	int a, b, t;
	
	scanf("%d",&t);
	
	for(int i = 0; i < t; i++){
		scanf("%d %d",&a, &b);
		printf("Case #%d: %d\n", i+1, a+b);
	}
	
    return 0;
}
