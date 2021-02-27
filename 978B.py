n=int(input())
s=input()
y=z=0
for i in range(n):
    if s[i]=='x':
        y+=1
        if y>2:
            z+=1
    else:
        y=0;
print(z)
