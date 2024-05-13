#Average calculator
l = []
while True :
    score = input("Enter score: ")
    if score == "" :
        break
    score = int(score)
    if score >= 0 and score <= 100 :
        l.append(score)

print("Total: "+str(sum(l)))
print("Avg: "+str(sum(l)/len(l)))
    

