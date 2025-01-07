#Merge Sort Algorithm
# Time Complexity: O(NlogN) running time


print("MERGERSORT")

def merge_sort_1(arr):

    if len(arr) > 1:
        left_arr = arr[:len(arr)//2]
        right_arr = arr[len(arr)//2:]

        #recursion
        merge_sort_1(left_arr)
        merge_sort_1(right_arr)

        #merge
        i = 0
        j = 0
        k = 0

        while i < len(left_arr) and j < len(right_arr):
            if left_arr[i] < right_arr[j]:
                arr[k] = left_arr[i]
                i += 1
            
            else:
                arr[k] = right_arr[j]
                j += 1
            k += 1

        while i < len(left_arr):
            arr[k] = left_arr[i]
            i += 1
            k += 1

        while j < len(right_arr):
            arr[k] = right_arr[j]
            j += 1
            k += 1




if __name__ =='__main__':
    # i = input("Enter the numbers with commas")
    L = [2,6,5,1,7,4,3]
    merge_sort_1(L)

    print(L)