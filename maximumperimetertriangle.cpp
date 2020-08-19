n = int(input())
l = sorted([int(arr_temp) for arr_temp in input().strip().split(' ')])[::-1]
tester = 0
for i in range(len(l) - 2):
    if l[i] < l[i + 1] + l[i + 2]:
        print(l[i + 2],l[i + 1],l[i])
        tester +=1
        break
if tester == 0:
    print(-1)