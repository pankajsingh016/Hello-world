#Second way to have 3 parameters in merge sort

def merge_sort(arr,l,r):
    #l is the begning of the arr
    #r is the end of the arr given as parameter
    if l < r:
        mid = l+ (r-l)//2
        
        #divide
        merge_sort(arr,l,mid)
        merge_sort(arr,mid+1,r)

        #conquer
        l_arr = arr[:mid+1]
        r_arr = arr[mid+1:]

        i,j,k=0,0,0

        while i < len(l_arr) and j < len(r_arr):

            if l_arr[i] < r_arr[j]:
                arr[k] = l_arr[i]
                k+=1
                i+=1
            
            else:
                arr[k] = r_arr[j]
                j+=1
                k+=1
        
        while i < len(l_arr):
            arr[k] = l_arr[i]
            k+=1
            i+=1
        
        while j < (len(r_arr)):
            arr[k] = r_arr[j]
            j+=1
            k+=1



arr = [2,13,4,1,3,6,28]
print("LENGTH OF ARR",len(arr))
merge_sort(arr,0,len(arr))
print(arr)