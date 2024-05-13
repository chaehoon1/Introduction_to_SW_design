suggested = { "hanyang" : ["hanyang.ac.kr", "hanyang univ"], "univ" : ["univ2024", "univ meaning", "unv", "univ2023, univ2022"], "computr" : ["computer"]}
search = input()
print("Showing results for "+search)
if search in suggested :
    print(" *Suggested : ", end="")
    for word in suggested[search] :
        print(word + " ", end="")
    print()
    
    
