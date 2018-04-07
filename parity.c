//Project 1 07/04/18
#include <stdio.h>

main(){
	int i,m,n, t;
	
	i = 0;
	m = 100;
	n = 0;

	while(i < m){
		n++;
		t = n;
		while(t > 0){
			t = t - 2;
			if (t == 0){
				printf("%d is of even parity\n", n);
				break;
			}else
			if (t == 1){
				printf("%d is of odd parity\n", n);
				break;
			}
		} 	
	i++;
	}
}	
