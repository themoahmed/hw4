# CMake generated Testfile for 
# Source directory: /work/Homework/hw4/hw4_tests/equalpaths_tests
# Build directory: /work/Homework/hw4/hw4_tests/equalpaths_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(EqualPaths.Empty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.Empty")
set_tests_properties(EqualPaths.Empty PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.RootOnly "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.RootOnly")
set_tests_properties(EqualPaths.RootOnly PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.RootLeft "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.RootLeft")
set_tests_properties(EqualPaths.RootLeft PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.RootRight "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.RootRight")
set_tests_properties(EqualPaths.RootRight PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.Full1 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.Full1")
set_tests_properties(EqualPaths.Full1 PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.TrueTest1 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.TrueTest1")
set_tests_properties(EqualPaths.TrueTest1 PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.TrueTest2 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.TrueTest2")
set_tests_properties(EqualPaths.TrueTest2 PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.TrueTest3 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.TrueTest3")
set_tests_properties(EqualPaths.TrueTest3 PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.TrueTest4 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.TrueTest4")
set_tests_properties(EqualPaths.TrueTest4 PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.FalseTest1 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.FalseTest1")
set_tests_properties(EqualPaths.FalseTest1 PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.FalseTest2 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.FalseTest2")
set_tests_properties(EqualPaths.FalseTest2 PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
add_test(EqualPaths.FalseTest3 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "--error-exitcode=113" "/work/Homework/hw4/hw4_tests/equalpaths_tests/equalpaths_tests" "--gtest_filter=EqualPaths.FalseTest3")
set_tests_properties(EqualPaths.FalseTest3 PROPERTIES  _BACKTRACE_TRIPLES "/work/Homework/hw4/hw4_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/Homework/hw4/hw4_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;2;add_source_problem;/work/Homework/hw4/hw4_tests/equalpaths_tests/CMakeLists.txt;0;")
