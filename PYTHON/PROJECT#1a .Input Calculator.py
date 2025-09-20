
## Faulty calculator
## Created for practice
## Try calculating 232323232323232**23232323232323


num1 = int(input('inter your 1st number: '))
num2 = int(input('inter your 2nd number: '))
math = input("what do you wanna do?\nAvailable functions are +,-,*,/,**,//: ")


if(math == '+'):
    add = num1+num2
    print('the value of',num1,math,num2,'is',add)
elif(math == '-'):
    sub = num1-num2
    print('the value of',num1,math,num2,'is',sub)
elif(math == '/'):
    div = num1/num2
    print('the value of',num1,math,num2,'is',div)
elif(math == '*'):
    multiple = num1*num2
    print('the value of',num1,math,num2,'is',multiple)
elif(math == '**'):
    expo = num1**num2
    print('the value of',num1,math,num2,'is',expo)
elif(math == '//'):
    floor = num1//num2
    print('the value of',num1,math,num2,'is',floor)
else:
    print('did you read my message?')
    print('try again dood')