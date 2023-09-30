import matplotlib.pyplot as plt
import numpy as np
# make data
X=np.linspace(-3, 3, 1000)
Y= np.linspace(-3, 3, 1000)
X, Y = np.meshgrid(X,Y)
Z = np.sin(X)*np.cos(Y)

levels = np.linspace(np.min(Z), np.max(Z), 1000)

fig, ax = plt.subplots(figsize=(10,10))

contour=ax.contourf(X, Y, Z, levels=levels,cmap="bone")
plt.colorbar(contour, ax=ax, label="Z values")

ax.grid()
plt.show()