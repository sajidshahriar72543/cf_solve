Y = "YES"
N = "NO"
for _ in range(int(input())):
	n = int(input())
	H = list(map(int,input().split()))
	L = list(map(int,input().split()))
	h = [0] * n
	
	f = 1
	if H[0] != L[0]:
		f = 0
	for i in range(1, n):
		if H[i] < H[i - 1] or L[i] > L[i - 1] or (H[i] != H[i - 1] and L[i] != L[i - 1]):
			f = 0
			break
	if f == 0:
		print(N)
		continue

	h[0] = H[0]
	x = L[0] + 1
	ck = {h[0]}
	q = 1
	for i in range(1, n):
		if H[i] != H[i - 1]:
			h[i] = H[i]
			ck.add(h[i])
		elif L[i] != L[i - 1]:
			h[i] = L[i]
			x = L[i] + 1
			ck.add(h[i])
		else:
			for _ in range(100000):
				ck.add(x)
				if(len(ck) > q):
					h[i] = x
					break
				x += 1
		q = len(ck)
		if h[i] > H[i] or h[i] < L[i]:
			f = 0
			break

	if q != n:
		f = 0

	if f == 0:
		print(N)
	else:
		print(Y)