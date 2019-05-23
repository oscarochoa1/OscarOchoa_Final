import numpy as np
import matplotlib.pyplot as plt


data = np.loadtxt("calculo.txt")
plt.plot(data)
plt.savefig("OScarOchoa_Final15.pdf")