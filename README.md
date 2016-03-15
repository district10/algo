# algo

重复造轮子。

## Notes

* Google Test Docs: see <http://tangzx.qiniudn.com/doc-google-test.html>

## Acknowledgements

* [cppformat: 3rdParty/cppformat/](https://github.com/cppformat/cppformat)
* [Google Test: 3rdParty/gmock/](https://github.com/google/googletest)

All copyright claims moved here:

```plain
// Copyright 2006, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

## Usage

```bash
$ cd algo
$ mkdir build && cd build
$ cmake -DCMAKE_BUILD_TYPE ..
$ make
```

detailed:

```bash
➜  git  git clone git@github.com:district10/algo.git                            
Cloning into 'algo'...
remote: Counting objects: 130, done.
remote: Compressing objects: 100% (97/97), done.
remote: Total 130 (delta 37), reused 117 (delta 24), pack-reused 0
Receiving objects: 100% (130/130), 380.51 KiB | 248.00 KiB/s, done.
Resolving deltas: 100% (37/37), done.
Checking connectivity... done.
➜  git  cd algo
➜  algo git:(master) mkdir build        
➜  algo git:(master) cd build
➜  build git:(master) cmake -DCMAKE_BUILD_TYPE=Debug ..
-- The C compiler identification is GNU 5.2.1
-- The CXX compiler identification is GNU 5.2.1
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Try OpenMP C flag = [-fopenmp]
-- Performing Test OpenMP_FLAG_DETECTED
-- Performing Test OpenMP_FLAG_DETECTED - Success
-- Try OpenMP CXX flag = [-fopenmp]
-- Performing Test OpenMP_FLAG_DETECTED
-- Performing Test OpenMP_FLAG_DETECTED - Success
-- Found OpenMP: -fopenmp  
-- Looking for include file pthread.h
-- Looking for include file pthread.h - found
-- Looking for pthread_create
-- Looking for pthread_create - not found
-- Looking for pthread_create in pthreads
-- Looking for pthread_create in pthreads - not found
-- Looking for pthread_create in pthread
-- Looking for pthread_create in pthread - found
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/tzx/git/algo/build


➜  build git:(master) make
Scanning dependencies of target cppformat
[  9%] Building CXX object 3rdParty/cppformat/CMakeFiles/cppformat.dir/format.cc.o
Linking CXX static library libcppformatd.a
[  9%] Built target cppformat
Scanning dependencies of target gmock
[ 18%] Building CXX object 3rdParty/gmock/CMakeFiles/gmock.dir/gmock-gtest-all.cc.o
Linking CXX static library libgmockd.a
[ 18%] Built target gmock
Scanning dependencies of target SimpleAlgo
[ 27%] Building CXX object src/SimpleAlgo/CMakeFiles/SimpleAlgo.dir/kmp.cpp.o
Linking CXX static library libSimpleAlgod.a
[ 27%] Built target SimpleAlgo
Scanning dependencies of target SimpleStdCpp
[ 36%] Building CXX object src/SimpleStdCpp/CMakeFiles/SimpleStdCpp.dir/strcpy.cpp.o
[ 45%] Building CXX object src/SimpleStdCpp/CMakeFiles/SimpleStdCpp.dir/strlen.cpp.o
[ 54%] Building CXX object src/SimpleStdCpp/CMakeFiles/SimpleStdCpp.dir/atoi.cpp.o
Linking CXX static library libSimpleStdCppd.a
[ 54%] Built target SimpleStdCpp
Scanning dependencies of target Test3rdParty
[ 63%] Building CXX object tests/Test3rdParty/CMakeFiles/Test3rdParty.dir/test-gtest.cpp.o
[ 72%] Building CXX object tests/Test3rdParty/CMakeFiles/Test3rdParty.dir/test-cppformat.cpp.o
[ 81%] Building CXX object tests/Test3rdParty/CMakeFiles/Test3rdParty.dir/gtest_main.cc.o
Linking CXX executable Test3rdParty
[ 81%] Built target Test3rdParty
Scanning dependencies of target TestAlgo
[ 90%] Building CXX object tests/TestAlgo/CMakeFiles/TestAlgo.dir/test-algo-simple-std.cpp.o
[100%] Building CXX object tests/TestAlgo/CMakeFiles/TestAlgo.dir/gtest_main.cc.o
Linking CXX executable TestAlgo
[100%] Built target TestAlgo


➜  build git:(master) ./tests/Test3rdParty/Test3rdParty 
Running main() from gtest_main.cc
[==========] Running 4 tests from 3 test cases.
[----------] Global test environment set-up.
[----------] 1 test from array_sorter_test
[ RUN      ] array_sorter_test.char_arr_sort
[       OK ] array_sorter_test.char_arr_sort (0 ms)
[----------] 1 test from array_sorter_test (0 ms total)

[----------] 2 tests from SquareRootTest
[ RUN      ] SquareRootTest.ZeroAndNegativeNos

[WARNING] /home/tzx/git/algo/3rdParty/gmock/gmock-gtest-all.cc:7319:: Death tests use fork(), which is unsafe particularly in a threaded context. For this test, Google Test couldn't detect the number of threads.
/home/tzx/git/algo/tests/Test3rdParty/test-gtest.cpp:40: Failure
Death test: square_root(-22.0)
    Result: died but not with expected exit code:
            Exited with exit status 255
Actual msg:
[  DEATH   ] Error: Negative Input
[  DEATH   ] 
[  FAILED  ] SquareRootTest.ZeroAndNegativeNos (2 ms)
[ RUN      ] SquareRootTest.PositiveNos
[       OK ] SquareRootTest.PositiveNos (0 ms)
[----------] 2 tests from SquareRootTest (3 ms total)

[----------] 1 test from cppformat
[ RUN      ] cppformat.cstr
/home/tzx/git/algo/tests/Test3rdParty/test-cppformat.cpp:9: Failure
Value of: fmt::sprintf("{}: {}\n", 2, "50").c_str()
  Actual: "{}: {}\n"
Expected: "2: 50"
[  FAILED  ] cppformat.cstr (0 ms)
[----------] 1 test from cppformat (1 ms total)

[----------] Global test environment tear-down
[==========] 4 tests from 3 test cases ran. (6 ms total)
[  PASSED  ] 2 tests.
[  FAILED  ] 2 tests, listed below:
[  FAILED  ] SquareRootTest.ZeroAndNegativeNos
[  FAILED  ] cppformat.cstr

 2 FAILED TESTS
```
