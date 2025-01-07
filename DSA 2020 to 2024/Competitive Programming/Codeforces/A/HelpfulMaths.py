# import sys


# sys.stdin = open('E:\The Dead Promise\input.txt','r')

# sys.stdout = open('E:\The Dead Promise\output.txt','w')

#start from below here
i = str(input())
a = i.split('+')

l = []
for j in a:
	l.append(int(j))

for j in range(0,len(l)):
	for k in range(0,j):
		if l[j] < l[k]:
			tmp = l[j]
			l[j] = l[k]
			l[k] = tmp
ans = ""
for k in range(0,len(l)):
	ans = ans+str(l[k])+"+"

print(ans[:-1])