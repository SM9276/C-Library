#include <stdio.h>
#include <stdlib.h>

double* declareDoubleArray(int size){ 
    double* array;
	array = malloc(sizeof(double) * size);
    return array;
} 






double* readMemoryArray(){  	
	/***************************************************
    *
    ****************************************************/
    double* Wallet;
	Wallet = declareDoubleArray(64) 
    
    FILE *walletFile;
	walletFile = fopen("wallet.txt", "r");
	if(walletFile == NULL){
        fprintf(stderr, "Error opening file");
        exit(1);
    }

	double number;
	int index = 0;
	while( (number = fgetf(walletFile)) != EOF){
		Wallet[index]  = number;
		index++;	
	}
	// else{
	// 	for(int x = 0; x <= 64; x++){
	// 		Wallet[x] = 0.0;
	//      }
    //  }
}
