#include <TH/TH.h>

int my_lib_ImtL_1D_forward(THFloatTensor *weights, THFloatTensor *b, int n, float t,
		       THFloatTensor *output)
{
	if (!THFloatTensor_isSameSizeAs(weights, b))
		return 0;
	THFloatTensor_resizeAs(output, weights);
	THFloatTensor_cadd(output, weights, 1.0, b);
    return 1;
}

int my_lib_ImtL_1D_backward(THFloatTensor *grad_output, THFloatTensor *grad_input)
{
//    THFloatTensor_resizeAs(grad_input, grad_output);
//    THFloatTensor_fill(grad_input, 1);
    return 1;
}

int main(int argc, char * argv[])
{
	printf("Hello\n");
	int n = 11;
	float t = 5e-2;

	THFloatTensor *weights = THFloatTensor_newWithSize1d(n*(n-1));
}
