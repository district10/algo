# algo

重复造轮子。

## CMakeLists.txt Notes

```cmake
cmake_minimum_required( VERSION 2.6 )
project( Algo )

add_executable( ${PROJECT_NAME} main.cpp )

find_package(Qt4 REQUIRED)
include( ${QT_USE_FILE} )
target_link_libraries( ${PROJECT_NAME} ${QT_LIBRARIES} )

find_package( Boost REQUIRED )
include_directories( ${Boost_INCLUDE_DIR} )
link_directories( ${Boost_LIBRARY_DIRS} )
set( Boost_USE_STATIC_LIBS        OFF )
set( Boost_USE_MULTITHREADED      ON  )
set( Boost_USE_STATIC_RUNTIME     OFF )
set( BOOST_ALL_DYN_LINK           ON  )
target_link_libraries( ${PROJECT_NAME} ${Boost_LIBRARIES} )

find_package( OpenCV REQUIRED )
target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )
```

## Acknowledgements

* [Google Test: 3rdParty/gmock/](https://github.com/google/googletest)
* [cppformat: 3rdParty/cppformat/](https://github.com/cppformat/cppformat)

All these kind of disclaimers moved here. {I readly don't like simple code
burried beneath them ;)}

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

## Notes

Google Test Docs: see <http://tangzx.qiniudn.com/doc-google-test.html>
