import seaborn as sns
import pandas  as pd
import matplotlib.pyplot as plt

data_frame=pd.read_csv("D:\GitHub\Estudos\Python\Seaborn\scope_6.csv")
sns.set_theme()
sns.lineplot(x="time",y="volt",data=data_frame,linewidth=3)
plt.xlim(0,1e-5)
plt.xlabel(r"Tempo ($\mu$s)")
plt.ylabel("Tensão (V)")
plt.show()