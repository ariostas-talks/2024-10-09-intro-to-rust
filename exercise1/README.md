# Exercise 1

This directory contains a very simple example crate. You can find the code in `src/main.rs'. The code has multiple issues, so we will tackle them one my one.

1. The code has some very wacky formatting, so it's quite difficult to read. Let's fix this with cargo by running the formatter (`cargo fmt`).

2. The code doesn't even compile! Try running `cargo build` to see what it complains about. Luckily, the Rust compiler is very helpful and often tells us how the code most likely was sopposed to look like. Fix it, and then verify that it runs with `cargo run`.

3. Even though the code now runs, there is something that could still be improved. This is where `clippy` comes in. It is likely that you already have it installed, but you can run `rustup component add clippy` to make sure. Then you can use `cargo clippy` to run it. Often, it can fix the issues that it finds by using `cargo clippy --fix`.