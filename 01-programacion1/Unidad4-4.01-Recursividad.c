#include<stdio.h>
 
void count_dn(int count) {
	count -- ;
	printf ( "El valor de la cuenta es %d\n", count ) ;
	printf ("test1\n");
	if (count > 0)
		count_dn(count) ,
		printf ("test2\n");
	printf ("test3\n");
	printf ( "Ahora la cuenta es %d\n", count ) ;
}

int main(){
	
	int index ;
	index = 8 ;
	count_dn(index) ;
	return 0;
}
