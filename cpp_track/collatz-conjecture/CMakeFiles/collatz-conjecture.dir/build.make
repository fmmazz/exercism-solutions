# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.0_1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.0_1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fmmazzola/Exercism/cpp/collatz-conjecture

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fmmazzola/Exercism/cpp/collatz-conjecture

# Include any dependencies generated for this target.
include CMakeFiles/collatz-conjecture.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/collatz-conjecture.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/collatz-conjecture.dir/flags.make

CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.o: CMakeFiles/collatz-conjecture.dir/flags.make
CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.o: collatz_conjecture_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fmmazzola/Exercism/cpp/collatz-conjecture/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.o -c /Users/fmmazzola/Exercism/cpp/collatz-conjecture/collatz_conjecture_test.cpp

CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fmmazzola/Exercism/cpp/collatz-conjecture/collatz_conjecture_test.cpp > CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.i

CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fmmazzola/Exercism/cpp/collatz-conjecture/collatz_conjecture_test.cpp -o CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.s

CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.o: CMakeFiles/collatz-conjecture.dir/flags.make
CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.o: collatz_conjecture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fmmazzola/Exercism/cpp/collatz-conjecture/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.o -c /Users/fmmazzola/Exercism/cpp/collatz-conjecture/collatz_conjecture.cpp

CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fmmazzola/Exercism/cpp/collatz-conjecture/collatz_conjecture.cpp > CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.i

CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fmmazzola/Exercism/cpp/collatz-conjecture/collatz_conjecture.cpp -o CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.s

CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.o: CMakeFiles/collatz-conjecture.dir/flags.make
CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.o: test/tests-main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fmmazzola/Exercism/cpp/collatz-conjecture/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.o -c /Users/fmmazzola/Exercism/cpp/collatz-conjecture/test/tests-main.cpp

CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fmmazzola/Exercism/cpp/collatz-conjecture/test/tests-main.cpp > CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.i

CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fmmazzola/Exercism/cpp/collatz-conjecture/test/tests-main.cpp -o CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.s

# Object files for target collatz-conjecture
collatz__conjecture_OBJECTS = \
"CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.o" \
"CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.o" \
"CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.o"

# External object files for target collatz-conjecture
collatz__conjecture_EXTERNAL_OBJECTS =

collatz-conjecture: CMakeFiles/collatz-conjecture.dir/collatz_conjecture_test.cpp.o
collatz-conjecture: CMakeFiles/collatz-conjecture.dir/collatz_conjecture.cpp.o
collatz-conjecture: CMakeFiles/collatz-conjecture.dir/test/tests-main.cpp.o
collatz-conjecture: CMakeFiles/collatz-conjecture.dir/build.make
collatz-conjecture: CMakeFiles/collatz-conjecture.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fmmazzola/Exercism/cpp/collatz-conjecture/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable collatz-conjecture"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/collatz-conjecture.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/collatz-conjecture.dir/build: collatz-conjecture

.PHONY : CMakeFiles/collatz-conjecture.dir/build

CMakeFiles/collatz-conjecture.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/collatz-conjecture.dir/cmake_clean.cmake
.PHONY : CMakeFiles/collatz-conjecture.dir/clean

CMakeFiles/collatz-conjecture.dir/depend:
	cd /Users/fmmazzola/Exercism/cpp/collatz-conjecture && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fmmazzola/Exercism/cpp/collatz-conjecture /Users/fmmazzola/Exercism/cpp/collatz-conjecture /Users/fmmazzola/Exercism/cpp/collatz-conjecture /Users/fmmazzola/Exercism/cpp/collatz-conjecture /Users/fmmazzola/Exercism/cpp/collatz-conjecture/CMakeFiles/collatz-conjecture.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/collatz-conjecture.dir/depend

