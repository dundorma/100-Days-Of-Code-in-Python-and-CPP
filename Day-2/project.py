print("Welcome to the tip calculator")
total_bill = float(input("What was the total bill? $"))
tip_percent = int(input("What percentage tip would you like to give? 10, 12, or 15? "))
peep = int(input("How many people to split the bill? "))

bill_perSon = round(total_bill * (1 + tip_percent/100) / peep,2)
print(f"Each person should pay: ${bill_perSon}")