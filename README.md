# Functions-in-Cpp
**Aim:** To study and implement various types of functions in C++.  
**Tools:** GNU g++ compiler (for local execution) or any code editor / Online C++ Compiler.  

## Theory

A **function** in C++ is a reusable block of code that does a particular job. It enhances code reusability, readability, and minimizes redundancy by encapsulating repeated operations into a single callable unit. Functions accept input parameters, provide output values, or both.
Types of parameter passing are **Call by Value**, **Call by Reference**, and **Call by Pointer**. Functions can also act upon arrays, condition-based operations, and handle other data types.

### Key Features:
- Modular approach to programming.
- Code can be reused several times.
- Parameter passing is supported by value, reference, and pointers.
- Supported for calculations, condition checks, and data manipulation.


## 1. Call by Value
**Explanation:**
In call by value, copies of the actual parameters are used to pass to the function as formal parameter. Modifications of parameters within the function will not change the original variables. It keeps the original values intact.
It is easy but less efficient for big data as it requires copying.

**Logic:**
Pass the variables through to a function, swap them within, and see original values are the same. 

**Algorithm:**
1. Start.  
2. Define a function to swap two values.  
3. Perform swapping inside the function using a temporary storage.  
4. In the main program, declare two numbers.  
5. Call the function with these numbers.  
6. Display the numbers in the main program.
7. There will be no change as  pass by value.  
8. Stop.  


## 2. Call by Reference
**Explanation:**
References (aliases) of variables are passed to the function in call by reference. Modifications made on parameters directly affect the original variables.
It is data copy avoiding and it is good for large objects.

**Logic:**
Pass references of variables to a function and interchange them directly, changing original variables.

**Algorithm:**
1. Start.  
2. Define a function to swap two values using references.  
3. Swap the values inside the function.  
4. In the main program, declare two numbers.  
5. Call the function with these numbers.  
6. Display the modified values.  
7. The values will be swaped pass by refrence.  
8. Stop.  


## 3. Call by Pointer
**Explanation:**
In call by pointer, function gets memory addresses of variables. Direct modification of original values is possible through dereferencing pointers.
It is helpful in manipulation of arrays, dynamic memory, and multiple return values.

**Logic:**
Pass addresses of variables to a function, swap values using pointer dereferencing. 

**Algorithm:**
1. Start.  
2. Define a function to swap two values using addresses.  
3. Perform swapping inside the function by dereferencing.  
4. In the main program, declare two numbers.  
5. Call the function with the addresses of these numbers.  
6. Display the modified values.
7. There will be no change as  pass by value.    
8. Stop.
9. 
## 4. Salary Increment with Conditions Using Functions
**Explanation:**
This program gives a salary increment according to certain conditions like projects, publications, profits, and new projects. Call by reference changes the salary in the original variable, but call by value does not.
It illustrates decision-making through functions.

**Logic:**
Check for several conditions; if met any 3, increment by reference function call to increase salary; else, increment by value function call. 

**Algorithm:**
1. Start.  
2. Define two functions: one to update salary by reference, and one by value.  
3. Take input for current salary and performance metrics.  
4. Check given conditions for increment eligibility.  
5. If eligible, call the function that updates salary by reference.  
6. If not eligible, call the function that updates salary by value.  
7. Display the salary.  
8. Stop.  

## 5. Change of Array Using Function
**Explanation:**
This program modifies every element of an array to begin with a specified number, each element increasing by one. Passing array and variable by reference enables the values to be modified directly.
It emphasizes passing arrays to functions.

**Logic:**
Pass array and integer reference; update array elements sequentially starting from given number.

**Algorithm:**
1. Start.  
2. Define a function to modify array elements and increment a counter.  
3. Take input for the starting number.  
4. Display the original array.  
5. Call the function to modify the array.  
6. Display the updated array.  
7. Stop.  
## Conclusion
We explored different types of functions in C++ including call by value, call by reference, call by pointer, conditional operations using functions, and passing arrays to functions. Each technique is applicable in certain situations, is efficient enough, and has some impact upon original 
