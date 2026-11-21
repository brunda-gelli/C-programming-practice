# C-programming-practice
C programming practice and learning journey


#q23_rearrange.c explanation 

#problem:


arranging given elements such that even numbers appears first and then odd numbers without changing their relative order


#approach:


1.use arr2 to mark even numbers(0) and odd numbers(1)


2.collect even numbers marked(0) into arr3


3.collect odd numbers marked(1) into arr3


4.join arr4 at the end of arr3


5.print arr3


#concepts used:


1.nested loops


2.arrays(1D)


3.conditional loop boundaries


#q28_matrixsum.c explanation :

#problem:


finding sum of any rectangular matrix inside given matrix


#approach:


1.after collecting matrix and it's elements from user,ask user for r1,c1,r2,c2 represents top row index,left column index,bottom row index,right column index which will give us the required rectangle


2.use for loops,(a).for(k=r1;k<=r2;k++)-row tracing


(b) for(n=c1;n<=c2;n++)-for column tracing
to find the sum of elements inside the rectangular matrix


3.print sum


concepts used:


1.conditional loop boundaries 


2.arrays


