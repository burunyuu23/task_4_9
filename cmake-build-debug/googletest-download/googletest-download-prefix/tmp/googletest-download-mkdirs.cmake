# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/user/CLionProjects/task_4_9_v2/cmake-build-debug/googletest-src"
  "C:/Users/user/CLionProjects/task_4_9_v2/cmake-build-debug/googletest-build"
  "C:/Users/user/CLionProjects/task_4_9_v2/cmake-build-debug/googletest-download/googletest-download-prefix"
  "C:/Users/user/CLionProjects/task_4_9_v2/cmake-build-debug/googletest-download/googletest-download-prefix/tmp"
  "C:/Users/user/CLionProjects/task_4_9_v2/cmake-build-debug/googletest-download/googletest-download-prefix/src/googletest-download-stamp"
  "C:/Users/user/CLionProjects/task_4_9_v2/cmake-build-debug/googletest-download/googletest-download-prefix/src"
  "C:/Users/user/CLionProjects/task_4_9_v2/cmake-build-debug/googletest-download/googletest-download-prefix/src/googletest-download-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/user/CLionProjects/task_4_9_v2/cmake-build-debug/googletest-download/googletest-download-prefix/src/googletest-download-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/user/CLionProjects/task_4_9_v2/cmake-build-debug/googletest-download/googletest-download-prefix/src/googletest-download-stamp${cfgdir}") # cfgdir has leading slash
endif()
