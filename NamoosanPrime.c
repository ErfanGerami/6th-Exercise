
#include <stdio.h>
#include <math.h>

int IsPrime(int num){

	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0)
			return 0;
	}
	return 1;
}
int main(void){
	int n;
	scanf("%d",&n);
	int NamoosanPrimeCnt;
	int PrimeCnt;
	int index;
	while(n--){
		NamoosanPrimeCnt=0;
		PrimeCnt=0;
		int cnt=2;
		scanf("%d",&index);
		index++;
		while(1){

			if(IsPrime(cnt)){
				PrimeCnt++;
				if(IsPrime(PrimeCnt)){
					NamoosanPrimeCnt++;
					if(NamoosanPrimeCnt==index){
						printf("%d\n",cnt);
						break;
					}

				}
			}
			cnt++;

		}


	}

}
