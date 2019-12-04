import numpy as np
import matplotlib.pyplot as plt
import math
import random

def fourier(x):  
    valores = np.loadtxt('sol.txt')
    listafun=[]
    funcion=np.ones(len(valores),dtype=complex)
    for p in range (len(valores)):
        funcion[p]=0.0j
        for j in range (len(valores)): 
            
            funcion += (x*np.exp(-2*np.pi*1j)/len(valores))**(p*j)
            
    listafun.append(funcion)
    plt.plot(funcion, d)
    plt.savefig("solar.png")
    return listafun

d=[x for x in range (1,1256)]
print(fourier(1))