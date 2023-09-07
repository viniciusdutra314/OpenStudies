import plotly.express as px
import plotly.io as pio
import plotly.graph_objects as go
from rich import print
df_stocks=px.data.stocks()
print(df_stocks)
fig=px.line(df_stocks,x='date',y='GOOG')
fig2=px.line(df_stocks,x='date',y='FB')
pio.write_image(fig2,"google.jpg")