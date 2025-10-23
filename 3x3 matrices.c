#include <stdio.h>
int main(){
	
	int matrix1[3][3] = { {1,2,6}, {4,7,8} ,
	                       {6,9,5}  };
	int matrix2[3][3] = { {6,7,6}, {4,2,8} ,
	                       {6,8,5}  };
	                       
	int sum[3][3];                       
	int i;
	int j;
	for( i =0; i<3;i++) {
		for (j = 0; j<3; j++){
		sum[i][j] =  matrix1[i][j]+ matrix1[i][j];
		}
		
	}
	
	printf("The sum of matrices is :\n ");
	for( i =0; i<3;i++) {
		for (j = 0; j<3; j++){
			printf("%d ",sum[i][j]);
			
		}
		printf("\n");
}
	return 0;
}
