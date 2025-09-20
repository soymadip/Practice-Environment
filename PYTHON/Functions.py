import time


#-----------------------------------------------------------------


hour = int(time.strftime('%H'))
def greeting():
    if(hour>=0 and hour<12):
        print("Good Morning Sir!")
    elif(hour>=12 and hour<17):
        print("Good Afternoon Sir!")
    elif(hour>=17 and hour<0):
        print("Good Night Sir!")
    else:
        print('Good Night sir!')
  



def factorial(n): # this thing has a limit of 999 though😁
    if(n == 0 or n == 1):
        return 1
    else:
        return n*factorial(n-1)




def fibonacci(n):
    if(n == 1):
        return 1
    elif(n == 0):
        return 0
    else:
        return fibonacci(n-1) + fibonacci(n-2)




def calculator(a, b, c):
    if(c == '+'):
        return (a+b)
    elif(c == '-'):
        return (a-b)
    elif(c == '*'):
        return (a*b)
    elif(c == '**'):
        return (a**b)
    elif(c == '//'):
        return (a//b)
    elif(c == '%'):
        return (a%b)
    else:
        pass



    
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







    