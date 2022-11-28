n=18
number_of_guess=1
print("number of guess is limited to only 9 times.")
while(number_of_guess<=9):
    n=int(input("guess the number:"))

    if (n<18):
        print("you enter less number plese enter a greater number.\n")
    elif(n>18):
        print("you enter greater number plese enter a smaller number.\n")
    else:
        print("you won.\n")
print(number_of_guess,"no of guesses left")
number_of_guess=number_of_guess+1
if(number_of_guess>9):print("game over.\n")
