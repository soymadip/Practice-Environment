# same input calculator using def


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

        


input1 = int(input('enter your 1st number: '))
input2 = int(input('enter your 2nd number: '))
opt = input('enter your operator: ')


ans = calculator(input1, input2, opt)
print(ans)