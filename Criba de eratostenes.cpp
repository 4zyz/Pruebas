#include <stdio.h>
int ar[1000000] = {0};

int main(){
	int x, k, y;
	
	for(x=2; x<=1000000; x++){
		if(ar[x]==0){
			ar[x]=2;
		}
		for(k=x*2; k<=1000000; k+=x){
			ar[k]=1;			
			}
			
	}
			for(y=2; y<=100; y++){
			printf("%d %d\n", ar[y], y);
		}
		
		

	
	
	return 0;
}
