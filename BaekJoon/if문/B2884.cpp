#include <stdio.h>

main(){
	int h,m; // h�� m�� 
	
	scanf("%d %d", &h, &m);
	
	if (m < 45) { // 45�� �ռ��� �ð� 
		h -= 1;
		m = (m + 60) - 45;
	}
	else m -= 45;
	
	if (h < 0) h += 24;
	
	printf("%d %d", h, m);
	
	return 0;
}
