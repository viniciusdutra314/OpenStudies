import numpy as np
import matplotlib.pyplot as plt
plt.style.use("seaborn-v0_8")

t = np.linspace(0, 10 * np.pi, 1000)  
raio = 1  
frequencia = 0.3

x = raio * np.cos(t)
y = raio * np.sin(t)
z = frequencia * t
fig ,ax = plt.subplots(subplot_kw={"projection":"3d"})

ax.plot(x, y, z, label='Helix')

ax.set_xlabel('X-axis')
ax.set_ylabel('Y-axis')
ax.set_zlabel('Z-axis')
plt.show()
