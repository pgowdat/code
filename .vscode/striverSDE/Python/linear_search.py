arr = [1, 2, 3, 3, 4, 5]
element = 6
indices = []

for i, e in enumerate(arr):
    if e == element:
        indices.append(i)

if indices:
    print(f"Element {element} found at indices {indices}")
else:
    print(f"Element {element} is not in the array")
