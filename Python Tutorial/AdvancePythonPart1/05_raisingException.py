a = int(input("Enter a number: "))
b= int(input("Enter a number: "))

if (b == 0):
    raise ZeroDivisionError("Program is not meant to divide by zero")
else:
    print(f"THe division a/b is {a/b}")