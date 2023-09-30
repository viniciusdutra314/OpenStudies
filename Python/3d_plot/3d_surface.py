import matplotlib.pyplot as plt
import numpy as np


# Make data
X = np.arange(-5, 5, 0.25)
Y = np.arange(-5, 5, 0.25)
X, Y = np.meshgrid(X, Y)
Z=X**2+Y**2

# Plot the surface
fig, ax = plt.subplots(subplot_kw={"projection": "3d"})
ax.plot_surface(X, Y, Z)
ax.set_zlabel("Height")
ax.set_ylabel("Length")
ax.set_xlabel("Width")
plt.show()