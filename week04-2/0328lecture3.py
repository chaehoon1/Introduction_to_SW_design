#Remove Redundant Character

def removeRedundantCharacter(word) :
    letters = []
    for letter in word :
        if letter not in letters :
            letters.append(letter)
    return letters

word = "otter"
letters = removeRedundantCharacter(word)
print(letters)
