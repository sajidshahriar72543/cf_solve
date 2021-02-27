for _ in range(int(input())):
	n = int(input())
	lmt = int(n ** (1 / 3))
	f = 0
	for i in range(1, lmt + 2):
		b = int(n - (i ** 3))
		if b <= 0:
			continue
		x = int(b ** (1 / 3))
		if x ** 3 == b:
			f= 1
		if (x + 1) ** 3 == b:
			f= 1
	if f:
		print("YES")
	else:
		print("NO")