# Exercise 2

The [Collatz conjecture](https://en.wikipedia.org/wiki/Collatz_conjecture) states that starting with a positive integer number and repeatedly applying the following function will allways eventually get to 1.

$$
f(n)=\begin{cases}
n/2, \qquad &\text{if } n \text{ is even},\\
3n+1, \qquad &\text{otherwise}
\end{cases}
$$

The `cpp` directory contains a simple C++ algorithm that finds the steps it takes to get to 1. To build, you simply need to run `make`, and then you can run it with `./collatz [positive integer]`. However, as you'll see, the output is nonsense, so there is a bug in the code!

The `rust` directory contains some Rust scaffolding to help you translate the algorithm into Rust. Finish the algorithm to find out what the issue was and why it's impossible to have this kind of bugs in (safe) Rust. To build and run it, go to the `rust` directory and use `cargo run [positive integer]`.
