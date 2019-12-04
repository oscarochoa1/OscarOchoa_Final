import numpy as np
import matplotlib.pyplot as plt
import math
import random

def funcion (x):
    sigma=1
    return ((1/sigma*np.sqrt(2*np.pi))*np.exp((-1/2)*(x**2/sigma**2)))

def metro(x):
    c=[2.031331588946557076e+00,5.886777538940683563e+00,2.195744759275823021e+00,6.821886748452244298e+00,8.793952398085184141e-01,2.951577398416659559e+00, 4.454332895499525158e+00, -1.804396045394615955e+00, -5.841925974092386120e+00, -1.113495627653518838e+00]

    for i in range (10**5):
        p=c[i-1]+1.0*np.random.random()-0.5
        r=min(1,funcion(p)/funcion(c[i-1]))
        alfa=np.random.random()
        if(alfa<r):
            c.append(p)
        else:
            c.append(c[i])
            
    plt.hist(c)
    plt.savefig("sigma.png")
    return(c)


print( metro(1))
