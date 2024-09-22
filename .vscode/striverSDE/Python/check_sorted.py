
def checkSorted(arr,n):
    for i in range(1,n):
        if(arr[i] < arr[i-1]):
            return False
    return True
    




if __name__=="__main__" :

    arr1=[1,2,3,4,5]
    n=len(arr1)
    sorted=checkSorted(arr1,n)
    print(sorted)
