import numpy as np
# make sure to run 'pwd' command in terminal to get
# the present working directory. Otherwise it will
# throw the following type of error.
# FileNotFoundError: [Errno 2] No such file or directory: 'input.txt'
file = open('input.txt', mode='r')
text = file.read().split()
# make sure to close the file after reading
file.close()
for i in range(len(text)):
    text[i] = int(text[i])
arr = np.fromiter(text, dtype=int).reshape(2, 9)
matrix1 = arr[0].reshape(3, 3)
matrix2 = arr[1].reshape(3, 3)
sum_matrix = matrix1+matrix2
file = open('output.txt', mode='w')
file.write("Matrix 1: "+str(matrix1.tolist()))
file.write('\n')
file.write("Matrix 2: "+str(matrix2.tolist()))
file.write('\n')
file.write("Sum Matrix: "+str(sum_matrix.tolist()))
file.close()  # It's important to close the file
