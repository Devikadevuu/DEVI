s=input("enter a sentence:"):
print(s)
wordslist=s.split()
print(wordslist)
for i in wordslist:
    print(f"{i}occurs{wordslist.count(i)}times")
