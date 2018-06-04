# functions/add.py
import torch
from torch.autograd import Function
from _ext import my_lib


class MyAddFunction(Function):
    def forward(self, input1, input2):
        output = input1.new()
        my_lib.my_lib_ImtL_1D_forward(input1, input2, output)
        return output

    def backward(self, grad_output):
        grad_input = grad_output.new()
        my_lib.my_lib_ImtL_1D_backward(grad_output, grad_input)
        return grad_input
