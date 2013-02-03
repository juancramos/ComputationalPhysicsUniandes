import numpy as np
data = np.loadtxt('lista.txt', dtype={'names':('Name','Age','Grade',),'formats': ('S10', 'i4', 'f4')})
print data
