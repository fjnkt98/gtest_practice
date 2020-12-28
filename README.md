# gtest_practice

My practice code of c++ googletest

## Environment

- Ubuntu 20.04 LTS on WSL2
- Host: Windows10 Home

## Practices

### Install Dependencies

Install GoogleTest via `apt`

```bash
sudo apt update
sudo apt install libgtest-dev
```

In Ubuntu 20.04, gtest 1.10.0-2 will be installed.

And, `cmake` will be used. Install via `apt`

```bash
sudo apt install cmake
```

### Clone Repository

Clone this repository in somewhere.

```bash
git clone https://github.com/fjnkt98/gtest_practice.git
```

### Build

First, create `build` directory for build.

```bash
cd gtest_practice
mkdir build
```

Second, run `cmake` and `make` to build the test code.

```bash
cd build
cmake ..
make
```

Finally, execute `test` which generated in previous step.
When you execute `test`, you may see following message.

```bash
$ ./test
Running main() from /build/googletest-j5yxiC/googletest-1.10.0/googletest/src/gtest_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from TestCase
[ RUN       ] TestCase.SumTest
[       OK  ] TestCase.SumTest (0 ms)
[----------] 1 test from TestCase (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED   ] 1 test.
```
