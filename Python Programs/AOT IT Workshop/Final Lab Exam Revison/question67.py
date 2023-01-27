import matplotlib.pyplot as plt

# Create an x-axis with values from 1 to n
x = range(1, 6)

# Create a y-axis for O(n)
y_n = [i for i in x]

# Create a y-axis for O(n^2)
y_n_squared = [i**2 for i in x]

# Create the graph
plt.plot(x, y_n, label='O(n)')
plt.plot(x, y_n_squared, label='O(n^2)')

# Add labels and a title
plt.xlabel('Input size (n)')
plt.ylabel('Time complexity')
plt.title('O(n) and O(n^2) Time Complexities')

# Add a legend
plt.legend()

# Show the graph
plt.show()
