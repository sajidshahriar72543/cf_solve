ONLINE_JUDGE = __debug__
if ONLINE_JUDGE:
    import io,os
    input = io.BytesIO(os.read(0,os.fstat(0).st_size)).readline
for _ in range(int(input())):
	n = int(input())
	n -= 1
	ans = 2 * (n // 5)
	n -= (n // 5) * 5
	if n == 4:
	    ans += 2
	elif n:
	    ans += 1
	print(ans)
