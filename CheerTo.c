
#include <stdio.h>




int main(void){
	int r=0;
	int y=0;
	char st[6];
	gets(st);
	for(int i=0;i<5;i++){
		if(st[i]=='R')
			r++;
		else if(st[i]=='Y')
			y++;

	}
	//printf("%d,%d,,",r,y);
	if(r>=3||(r>=2 && y>=2)||(y+r==5)){
		printf("nakhor lite");

	}else
		printf("rahat baash");




	return 0;
}
