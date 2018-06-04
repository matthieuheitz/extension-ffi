import torch
import numpy as np
from torch.autograd import Variable

from functions.add import MyAddFunction


# x = torch.range(1, 25).view(5, 5)
# print(x)
# input1, input2 = Variable(x), Variable(x * 4)
# print(MyAddFunction()(input1, input2))

# # Test in Python
# # Result : array([  1.,   3.,   5.,   7.,   9.,  11.,  13.,  15.,  17.,  19.,  10.])
# import numpy as np
# import np_utils as npu
# n = 11
# A = npu.get_1dgrid_weighted_adjacency_npsparse(n, np.arange(1,n)).toarray()
# print(np.matmul(A,np.ones(n)))

n = 11
N = n

w = torch.DoubleTensor(np.arange(1,n))
w2 = torch.DoubleTensor(np.ones(N))
# print(w)
# print(w2)


