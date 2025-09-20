

for i in range(10): # will try to run 10 times
    i = input('nter your number: ')

    if(str(i) == 'quit'):
        print('you are lucky, only this word is acceptable\nThis time enter number.')
        continue
    elif(int(i)<5 or int(i)>9):
        raise ValueError('it should be between 5 & 9')
    else:
        print('program is working.')
        break


