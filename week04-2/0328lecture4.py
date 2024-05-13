#Display Characters In The Word
def displayLetters(word, guessses) :
    for character in word :
        if character in guesses :
            print(character, end="")
        else :
            print("_", end = "")

word = "otter"
guesses = ['t']
displayLetters(word, guesses)
