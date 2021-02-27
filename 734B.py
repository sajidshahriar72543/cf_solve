two,three,five,six=map(int,input().split())
x=min(two,five,six)
two-=x
print((256*x)+(min(two,three)*32))
