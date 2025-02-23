alpha='abcdefghijklmnopqrstuvwxyz'
t=''
beta=input("input word  ")
k=int(input("enter key  "))
for i in beta:
    t=t+(alpha[((alpha.index(i)+k)%26)])
print(t)