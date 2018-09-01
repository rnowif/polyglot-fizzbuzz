# FizzBuzz C++

## Instructions to run on Ubuntu


```
$> sudo apt-get install cmake
$> cd /path/to/FizzBuzz
$> cmake --build cmake-build-debug --target all -- -j 4
$> ./cmake-build-debug/tests/unit_tests/Unit_Tests_run
```

## CLION IDE Specific Instructions

1. The IDE allows you to mark directories with their desired purpose.
To mark a directory right click on the directory name in the `Project` window
and select `Mark Directory as` from the drop-down menu.
    1. Mark the `src` directory as `Project Sources and Headers`
    1. Mark the `tests/lib/googletest` directory as  `Library Files`
1. Setup the `Run/Debug Configuration` by selecting `Edit Configurations...`
from the pull-down menu from the run button (green triangle) in the upper right
corner.
    1. Create a `Google Test` configuration
        1. In the upper left corner select the plus symbol.
        1. Chose `Google Test` from the drop-down menu.
        1. Set **Name** to `Unit Tests`.
        1. Set **Target** to `Unit_Tests_run`.