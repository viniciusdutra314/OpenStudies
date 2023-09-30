import matplotlib.pyplot as plt
import numpy as np
n = 100
xs = np.random.uniform(23, 32, n)
ys = np.random.uniform(0, 100, n)
zs = np.random.uniform(-50, -25, n)

fig, ax = plt.subplots(subplot_kw={"projection": "3d"})
ax.scatter(xs, ys, zs)
ax.view_init(8,-20)
plt.savefig("teste")