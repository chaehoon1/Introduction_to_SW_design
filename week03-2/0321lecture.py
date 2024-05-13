#Heads or Tails of a Coin
import random

def printHead() :
    print("        _.-'~~`~~'-._")
    print("     .'`  1  9  9  9 `'.")
    print("    /                   \\")
    print("  /`  /     000     000  `\\")
    print(" ;   /1   00   00 00   00  ;")
    print(";   111   0     0 0     0   ;")
    print("|     1   0     0 0     0   |")
    print("|     1   0     0 0     0   |")
    print(";     1   0     0 0     0   ;")
    print(" ;    1   00   00 00   00  ;")
    print("  \ 11111   000     000   /")
    print("   `\                   /`")
    print("     '._             _.'")
    print("        `'-..,,,..-'`")
    print("Let's flip the Coin!")

def printTail() :
    print("        _.-'~~`~~'-._")
    print("     .'`             `'.")
    print("    /       jJL\        \\")
    print("  /    @@@jJLjJJJL@@     `\\")
    print(" ;    @@@jJ===-L@@@@@      ;")
    print(";        jJ - -  L          ;") 
    print("|        JJ  |   X          |")
    print("|        JJ ---  X          |")
    print(";        J|\    /|          ;")
    print(" ;       /  |  |  \        ;")
    print("  \     |          |      /")
    print("   `\\ /             \   /`")
    print("     '._             _.'")
    print("        `'-..,,,..-'`")

print("Let's flip the coin!")
coin=random.randint(1,2)

if coin == 1:
    printHead()
else:
    printTail()

    