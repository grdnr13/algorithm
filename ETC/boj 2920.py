asc = False
desc = False
chord =input().split()
for i in range(len(chord) - 1):
    if chord[i] < chord[i+1]:
        asc = True
    if chord[i] > chord[i+1]:
        desc = True
if asc and desc:
    print("mixed")
else:
    if asc:
        print("ascending")
    if desc:
        print("descending")
