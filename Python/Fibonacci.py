import sys

def fibonacci (pos):
	if pos == 0:
		return 0	# F[0] = 0
	elif pos == 1:
		return 1	# F[1] = 1
	else:
		return (fibonacci(pos-2) + fibonacci(pos-1))	# F[n] = F[n-2] + F[n-1]

# Input
if len (sys.argv) == 2:
	pos = int(sys.argv[1])
else:
	pos = int (input ('Enter position: '))

# Output
res = fibonacci (pos)
print ('F[%d] = ' %pos, res)
