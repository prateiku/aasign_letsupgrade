import numpy as np

array3d = np.array([[[3,2,4,1], [6,5,8,7], [12,10,9,11]]])
print(f"Array: \n{array3d}")
print("**********************************************")
print(f"The dimension of array is: {array3d.ndim}")

print(np.sort(array3d))
print("**********************************************")
npwhere = np.where(array3d <= 10)
print(array3d[npwhere])
print("**********************************************")
