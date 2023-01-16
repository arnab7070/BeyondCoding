import matplotlib.pyplot as plt
teams = ["ABC", "XYZ", "MNP"]
votes = [180, 200, 20]
plt.bar(teams, votes, color="purple")
plt.title("Election results of india for the year 2000")
plt.xlabel("Teams")
plt.ylabel("Votes")
plt.show()
