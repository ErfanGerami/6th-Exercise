#include <math.h>
#include <stdio.h>
#include <string.h>
#define Sounds 5;

int main(void){
	char st1[51],st2[51];
	gets(st1);
	gets(st2);
//	if(st1[0]==st2[strlen(st2)-1]){
//		puts("YES");
//
//	}else{
//		puts("NO");
//	}
	char Last;
	for(int i=0;i<51;i++){
		if(st2[i+1]=='\0'){
			Last=st2[i];
			break;


		}
	}
	if(st1[0]==Last){
			puts("YES");

		}else{
			puts("NO");
		}




	return 0;
}
