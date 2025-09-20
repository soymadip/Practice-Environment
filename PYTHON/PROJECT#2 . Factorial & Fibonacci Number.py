# factorial & fibonacci number calculator

#----------------------------------------------------

# function to calculate factorial:

def factorial(n): # this thing has a limit of 999 though😁
    if(n == 0 or n == 1):
        return 1
    else:
        return n*factorial(n-1)


# function to calculate fibonacci number:
# it works like this:
# f(0) = 0, f(1) = 1, f(n) = f(n-1) + f(n-2) # f represents fibonacci itself
# f(0) = 0, f(1) = 1, f(2) = 1+0 = 1, f(3) = 2+1 = 3, f(4) = 3+2 = 5, f(5) = 4+3 = 7 


def fibonacci(n):
    if(n == 1):
        return 1
    elif(n == 0):
        return 0
    else:
        return fibonacci(n-1) + fibonacci(n-2)

# function to calculate both- 

def Fa_FibiCalculator(input_num, function):
    if(input_num > 999):
        return('\n\n-sorry sir my limit is 999.\n-I can not calculate from 4 digit numbers..\n')
    if(function == 1):
        return (f'\n|-- Value: {input_num}\n|\n|-- Fibonacci number of {input_num} is: {fibonacci(input_num)}\n')
    elif(function == 2):
        return (f'\n|-- Value: {input_num}\n|\n|-- Factorial of {input_num} is {factorial(input_num)}\n')
    elif(function == 3):
        return (f'\n|-- Value: {input_num}\n|\n|\n|-- Factorial is {factorial(input_num)}\n|\n|\n|-- Fibonacci number is {fibonacci(input_num)}\n')
    else:
        return (f'your input {input_num} is not in my supported functions') 

# Finally input_num & output:

function = int(input('''Here are the supported functions:
Press 1 to calculate the "Fibonacci Number".
Press 2 to calculate the "Factorial" of a number.
Press 3 to calculate both.
Enter your choice: '''))
input_num = int(input('Now give me the number you wanna calculate:'))
answer = f"\n----------------- ANSWER -----------------\n{Fa_FibiCalculator(input_num, function)}\n----------------------------------"

print(answer)    

