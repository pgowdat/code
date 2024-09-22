
def getElements(arr, n):
    if n == 0 or n == 1:
        print(-1, -1)  # edge case when only one element is present in array
    second_small= float('inf')
    small= float('inf')
    second_large = float('-inf')
    large = float('-inf')
  
    for i in range(n):
        if(arr[i]>large):
            second_large=large
            large=arr[i]
        elif(arr[i]>second_large and arr[i]!=large) :
            second_large=arr[i]  

        if(arr[i]<small):
            second_small=small
            small=arr[i]
        elif(arr[i]<second_small and arr[i]!=small) :
            second_small=arr[i]  
        

    print(" smallest is", small)
    print(" largest is", large)
    print("Second smallest is", second_small)
    print("Second largest is", second_large)




if __name__ == '__main__':
    arr = [1, 2, 4, 6, 7, 5]
    n = len(arr)
    getElements(arr, n)


