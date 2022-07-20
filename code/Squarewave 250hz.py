import pandas as pd     # importing pandas from library
import matplotlib.pyplot as plt     # importing matplotlib from library

df = pd.read_csv('250Hz wave.csv',header=None) # Read csv files and do operations
df.head

x=df[0] # x is equal to column 2 on the csv table
y=df[2] # y is equal to column 1 on the csv table

from matplotlib import pyplot as plt

fig, ax = plt.subplots(figsize=(10,7))  # unpacks the variables and axis easily
ax.plot(x,y)

plt.xlim(0, 10)

plt.show()
