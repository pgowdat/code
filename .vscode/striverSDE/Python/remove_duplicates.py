from typing import List

def remove_duplicates(arr: List[int], n)->int:
    s=set()
    for i in range(n):
        s.add(arr[i])

    k=len(s)
    j=0
    for y in s:
        arr[j] = y
        j+=1

    return k

if __name__=="__main__":
    arr=[1,1,2,2,2,3,3,3]
    n=len(arr)
    l=remove_duplicates(arr,n)
    for i in range(l):
        print(arr[i],end="")
