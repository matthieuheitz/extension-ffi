#include "my_lib.h"
#include <TH/TH.h>

#include <iostream>


int main(int argc, char * argv[])
{
	printf("Hello\n");
	int n = 11;
	float t = 5e-2;

//	THFloatTensor a;
	THFloatTensor *weights = THFloatTensor_newWithSize1d(n*(n-1));
//	THFloatTensor *b = THFloatTensor_newWithSize1d(n);
//	THFloatTensor *result = THFloatTensor_newWithSize1d(n);

	//float * w = THFloatTensor_data(weights);
	//std::cout<<w[0]<<std::endl;

//	my_lib_ImtL_1D_forward(weights,b,n,t,result);

	// Free memory
//	THFloatTensor_free(weights);
//	THFloatTensor_free(b);
//	THFloatTensor_free(result);

}
