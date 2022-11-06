import pandas as pd
import numpy as np

row0 = [0, 1, 2, 3, 4]
row1 = [1, 10, 20, 30, 40]
row2 = [10, 100, 200, 300, 400]
row3 = [np.nan, np.nan, 'aaa', np.nan, np.nan]
row4 = [0.1, 0.12, 0.123, np.nan, 0.12345]

df = pd.DataFrame([row0,row1,row2,row3, row4])
df.columns = ['col0', 'col1', 'col2' ,'col3', 'col4']
df.index = ['row0', 'row1', 'row2', 'row3', 'row4']

df


df.to_excel('~/desktop/output.xlsx')