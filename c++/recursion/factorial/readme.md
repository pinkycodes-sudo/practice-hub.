\# ✳️ Factorial Calculator (Recursion Practice)



This problem calculates the factorial of a number using \*\*recursive functions\*\* in C++. It demonstrates how a function can call itself to solve a problem step-by-step.



\## ✅ Problem Description



\- Prompt the user to enter a positive number  

\- Calculate the factorial using a recursive function  

\- Display the result  



> Example:  

> If the user enters `4`, the program should compute `4 \* 3 \* 2 \* 1 = 24`.



---



\## 🧠 Recursive Logic



A recursive function breaks a problem into smaller subproblems until it reaches a \*\*base case\*\*.



\### Formula



n! = n × (n - 1)!

Base Case: 1! = 1 and 0! = 1





\### Example: `factorial(4)`



The function makes recursive calls like this:



factorial(4)

→ 4 \* factorial(3)

→ 4 \* 3 \* factorial(2)

→ 4 \* 3 \* 2 \* factorial(1)

→ 4 \* 3 \* 2 \* 1 → 24





The call stack builds downward, then resolves back up.



---



\## 🛠️ Solution



\### 🔁 Recursive Function (`main.cpp`)



\- Takes one `int` parameter

\- Returns `1` if the number is `0` or `1` (base case)

\- Else, returns `n \* factorial(n - 1)`



---



\## 💡 Skills Practiced



\- Writing recursive functions  

\- Identifying base and recursive cases  

\- Understanding the call stack  

\- C++ function definition and return values



---



\## 📌 Notes



\- Only works for non-negative integers  

\- Shows how recursion can replace loops in certain problems  



