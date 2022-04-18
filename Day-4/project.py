import random
from unittest import result
rps = ["Rock", "Paper", "Scissors"]

player = int(input("What do you choose? Type 0 for Rock, 1 for Paper, or 2 for Scissors."))
bot = random.randint(0,2)

print(f"You chose: {rps[player]}")
print(f"Computer chose: {rps[bot]}")
result = ["Draw", "You lose", "You win"]

print(result[(bot-player)%3])