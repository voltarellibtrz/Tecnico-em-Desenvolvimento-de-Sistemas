#Primeira forma
for i in range(1,6):
    for j in range(i):
        print("*", end="")
    print()

#Segunda forma
print("\n \n \n \n")
for i in range(1,6):
    print("*",*i)