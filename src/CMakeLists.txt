# compile config library
add_library(compile_config INTERFACE)
target_compile_features(compile_config INTERFACE
                        cxx_std_11)
target_compile_options(compile_config INTERFACE
                        -Wall -Wextra -Wshadow -Wformat=2 -Wunused)


add_subdirectory(running_sum)
add_subdirectory(step_number_turning)
