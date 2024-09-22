from typing import List

def left_rotated(arr: List[int],n,d)->int:
    p=0
    while(p<+d):    
      temp=arr[0]
      for i in range(1,n):
        arr[i-1]=arr[i]
      arr[n-1]=temp
      p+=1   



if __name__=="__main__" :

    arr1=[1,2,3,4,5]
    n=len(arr1)
    d=3
    left_rotated(arr1,n,d)
    for i in arr1:
        print(i,end="")