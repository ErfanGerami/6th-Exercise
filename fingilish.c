
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>




char HaveSound[]={'a','e','i','o','u'};

int IsIn(char ch){

	for (int i=0;i<5;i++){
		if(HaveSound[i]==ch){
			return 1;
		}
	}
	return 0;
}
int main(void){
	char st[7];
	scanf("%s",&st);
	int counter=1;
	char index;
	for (int i=0;i<6;i++){
		index=st[i];
		if(IsIn(index)){
			counter*=2;
		}

	}
	printf("%d",counter);



	return 0;
}
