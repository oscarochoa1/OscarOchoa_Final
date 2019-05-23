
import numpy as np


def funcion(n):
    
    x = [4,10,12,80,50,40]
    hora = [1.113,1.028,1.059,1.052,1.039,1.217]
    barcos=[]
    velocidad=[]
    for i in range(1,n):
        for j in range(1,n):
            creo = x[i-1] + np.random.random()
            creo2 = x[j-1] + np.random.random()
            r = min(1, creo/x[i][j])
            duda= 1
            v = x[i]/hora[i]
            if (duda<r):

                    barcos.append(creo)
                    barcos.append(creo2)
                    hora.append(creo)
                    hora.append(creo2)
                    velocidad.append(v)
                    
            else:

                    barcos.append(x[i])
                    barcos.append(x[j])
                    hora.append(creo)
                    hora.append(creo2)
                    velocidad.append(v)
                    

                    