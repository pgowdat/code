from typing import List
# def appear_once(list1: List[int])->int:
#     m={}
#     for num in list1:
#         m[num]=m.get(num,0)+1

#     for num,count in m.items():
#         if count==1:
#             return num    
#     return -1

def appear_once(list1: List[int])->int:
    xorr=0
    for x in list1:
        xorr=xorr^x
    return xorr    

if __name__=="__main__":
    list1=[1,2,1,3,3]
    n=len(list1)
    x=appear_once(list1)
    print(x)

