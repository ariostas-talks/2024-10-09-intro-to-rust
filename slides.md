[comment]: # (This presentation was made with markdown-slides)
[comment]: # (Can be found here: https://gitlab.com/da_doomer/markdown-slides)
[comment]: # (Compile this presentation with the command below)
[comment]: # (mdslides slides.md)

[comment]: # (Set the theme:)
[comment]: # (THEME = white)
[comment]: # (CODE_THEME = github)

[comment]: # (controls: true)
[comment]: # (keyboard: true)
[comment]: # (markdown: { smartypants: true })
[comment]: # (hash: false)
[comment]: # (respondToHashChanges: false)

## Goodbye C/C++, Hello Rust

Andres Rios Tascon

PICSciE/RC Workshop | Oct 9, 2024

[comment]: # (!!!)

## Before we start

Clone the following repository:

https://github.com/ariostas-talks/2024-10-09-intro-to-rust

You can also find the link to these rendered slides in there.

<br/>
<br/>

### **If you don't have Rust installed:**
<small>
Click on Code > Codespaces > Create codespace on main.
</small>

[comment]: # (!!!)

## What is Rust?

Rust is a general-purpose programming language that focuses on being **safe** without sacrificing **performance**. It is low level, but with high-level abstractions and very modern design.

[comment]: # (!!!)

## Where is Rust being used?

Rust is exploding in popularity and making its way into a surprising number of places.

[comment]: # (!!! data-auto-animate)

## Where is Rust being used?

- In the Linux kernel (it's the first language to be adopted other than C and ASM!)
- In the Windows kernel and core libraries
- In the Android kernel and OS components (already making a big difference! [[link](https://security.googleblog.com/2024/09/eliminating-memory-safety-vulnerabilities-Android.html)])
- Many things being rewritten in Rust:
  - GNU coreutils
  - `ripgrep` (`grep`)
  - `uv` (`pip` + other functionality)
  - many others

[comment]: # (!!! data-auto-animate)

## Why is Rust so liked by developers?

Many reasons, including:

- Safe, without performance compromises
  - Robust compile-time checks
  - No garbage collector

[comment]: # (!!! data-auto-animate)

## Why is Rust so liked by developers?

Many reasons, including:

- Very modern design
  - Error handling without exceptions
  - Trait system instead of "standard" object-oriented
  - Easy dependency management
  - Functional statements, pattern matching, enums, powerful macros, ...

[comment]: # (!!! data-auto-animate)

## Why is Rust so liked by developers?

Many reasons, including:

- Powerful first-party tools
  - `cargo` (cf. `pip`, `conda`, `conan`)
  - `rustfmt` (cf. `black`, `clang-format`)
  - `clippy` (cf. `flake8`, `ruff`, `clang-tidy`)
  - `rustdoc` (cf. `sphinx`, `doxygen`)
  - `cargo-test` (cf. `pytest`, `ctest`)
  - `rust-analyzer` (IDE integration)
  - `cargo-bench` (benchmarking)

[comment]: # (!!! data-auto-animate)

## Why is Rust so liked by developers?

It is very enjoyable to develop Rust code, and you end up being more confident in your software.

[comment]: # (!!! data-auto-animate)

## Does this mean that C/C++ are dead?

[comment]: # (!!! data-auto-animate)

## Does this mean that C/C++ are dead?

No. There's still a ton of software written in these languages, so they're not going away anytime soon. However, Rust can help with the development of new software, and replace parts pieces where memory safety is critical.

However, Rust has been influencing the design of modern C++! Notably, C++23 and C++26 introduce have some features that are similar to those in Rust.

[comment]: # (!!! data-auto-animate)

## Getting started with Rust

Rust has a steep learning curve, so it can be a bit intimidating to get started.

Probably the best way to get started is by going through "[The Book](https://doc.rust-lang.org/book/)", which is free and accessible through the official website. It provides numerous examples and guides you through all the basics.

Other good options to add more practical experience is to follow the [Rustlings Course](https://github.com/rust-lang/rustlings/) and read the [Rust by Example](https://doc.rust-lang.org/rust-by-example/) book.

[comment]: # (!!! data-auto-animate)

## Getting started with Rust

Today we have limited time, so here's the plan:

1. I will start by showing you a quick demo of the software development tools in Rust and a brief introduction to the language.
2. We will work through a few simple exercises that will give you some hands-on experience with Rust.

[comment]: # (!!! data-auto-animate)

# 1. Demo part

[comment]: # (!!!)

# 2. Workshop part

Go to codespaces or your clone of the repo and do the exercises.

[comment]: # (!!!)

## Takeaways

- It can be a bit tricky to get started with Rust, but it is very rewarding.
- Thanks to all the powerful first-party tools, software development in Rust is very enjoyable.
- You can make binaries, Rust libraries, C-compatible libraries, Python packages, websites.
- Even if you don't plan to program in Rust, it is worth learning so that you become more consious of potential issues and improve the quality of your code.

[comment]: # (!!!)

## Further reading (and other stuff)

- [The book](https://doc.rust-lang.org/book/)
- [Rustlings Course](https://github.com/rust-lang/rustlings/)
- [Rust by Example](https://doc.rust-lang.org/rust-by-example/)
- [Rustnomicon](https://doc.rust-lang.org/nomicon/index.html)
- [Learning Rust with Advent of Code 2023](https://iscinumpy.dev/page/presentations/)
- [Rust Playground](https://play.rust-lang.org/)
- [Blessed](https://blessed.rs/)

