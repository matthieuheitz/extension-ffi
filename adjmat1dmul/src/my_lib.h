//#include <TH/TH.h>

int my_lib_ImtL_1D_forward(THFloatTensor *weights, THFloatTensor *b, int n, float t,
		       THFloatTensor *output);
int my_lib_ImtL_1D_backward(THFloatTensor *grad_output, THFloatTensor *grad_input);
