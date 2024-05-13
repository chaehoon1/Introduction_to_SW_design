#Yes or No to Play Again
playAgain = True

while playAgain :
    print("some logic here...")
    answer = ""
    while answer != "yes" and answer != "no" :
        print("Do you want to play again? (yes or no)")
        answer = input()
    if answer == "no" :
        playAgain = False


