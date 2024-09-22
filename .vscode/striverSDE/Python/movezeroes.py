from typing import List

def movezeroes(arr: List[int],n):
    j=-1
    for i in range(0,n):
        if arr[i]==0 :
            j=i
            break
    if(j==-1):
        return arr
    for i in range(j+1,n):
        if arr[i]!=0 :
            arr[i],arr[j]=arr[j],arr[i]
            j+=1
            
            

       


 

if __name__=="__main__" :

    arr1=[0,1,0,2,0,0,3,0,4,5]
    n=len(arr1)
    d=3
    movezeroes(arr1,n)
    for i in arr1:
        print(i,end="")