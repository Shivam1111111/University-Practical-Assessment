import numpy as np
a = np.array([[[2,17], [45, 78]], [[88, 92], [60, 76]],[[76,33],[20,18]]])
#a = np.array([(1,2),(3,4)])
print(a)
print(a.ndim)
print(a.itemsize*(a.size))
print(a.size)
print(a.shape)