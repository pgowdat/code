from typing import List

"""
arr: List[int] indicates that the function expects a list of integers as input.
-> int specifies that the function will return an integer.
"""

def sortArr(arr: List[int])-> int:
   arr.sort()
   return arr[-1]



if __name__=="__main__":
   arr1=[1,2,33,23,21]
   arr2 = [8, 10, 5, 7, 9]
   print("The Largest element in the array is:", sortArr(arr1))
   print("The Largest element in the array is:", sortArr(arr2))