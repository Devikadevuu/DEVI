a=[]
n= int(input("Enter the number of word in list:"))
for x in range(0,n):
    word=input("Enter word" + str(x+1) + ":")
    a.append(word)
max1=len(a[0])
temp=a[0]
for i in a:
    if(len(i)>max1):
       max1=len(i)
       temp=i
print("The word with the longest length is:")
print(temp)
print("length of the longest word",len(a[0]))                                                                                                                                                          
