\# 🌀 Fibonacci Calculator (Recursion Practice)



This problem calculates the \*\*Nth Fibonacci number\*\* using recursion in C++. It demonstrates how a function can call itself multiple times to solve a problem that depends on two previous results.







\## ✅ Problem Description



\- Prompt the user to enter a number `n`

\- Use a recursive function to compute the `n`th Fibonacci number

\- Display the result



> Example:  

> If the user enters `6`, the program should return `8` because:  

> `F(0)=0`, `F(1)=1`, `F(2)=1`, `F(3)=2`, `F(4)=3`, `F(5)=5`, `F(6)=8`







\## 🧠 Recursive Logic



Each number in the Fibonacci sequence is the sum of the \*\*two\*\* previous numbers.



\### Formula



F(n) = F(n-1) + F(n-2)

Base Cases:

F(0) = 0

F(1) = 1





\### Example: `fib(4)`



fib(4)

→ fib(3) + fib(2)

→ (fib(2) + fib(1)) + (fib(1) + fib(0))

→ ((fib(1) + fib(0)) + 1) + (1 + 0)

→ ((1 + 0) + 1) + (1 + 0)

→ 2 + 1 = 3



\## 💡 Skills Practiced



\- Writing recursive functions  

\- Using multiple recursive calls  

\- Understanding tree recursion and overlapping subproblems  

\- Deepening call stack understanding







