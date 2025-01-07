#Selection Sort Script
L = [5,4,1,2,3,4,9,0]

for i in range(len(L)):
        min = L[i]
        k = i
        for j in range(i,len(L)):
                if min > L[j]:
                        min = L[j]
                        k = j
        #swap
        temp = L[i]
        L[i] = min
        L[k] = temp
        print(L)



print(L)

            



