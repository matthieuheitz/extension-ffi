import torch
from torch.autograd import Variable

from functions.add import MyAddFunction


x = torch.range(1, 25).view(5, 5)
print(x)
input1, input2 = Variable(x), Variable(x * 4)
print(MyAddFunction()(input1, input2))