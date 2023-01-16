import matplotlib.pyplot as plt
import random
months = ["Jan", "Feb", "Mar", "Apr", "May", "Jun",
          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
randomElectricBill = []
for i in range(12):
    randomElectricBill.append(random.randint(500, 4000))
plt.bar(months, randomElectricBill)
plt.show()
