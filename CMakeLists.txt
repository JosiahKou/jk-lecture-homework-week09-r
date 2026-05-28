project(lecture_homework_week09-r LANGUAGES C ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(LINKER_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/linker-script.ld")
set(TARGET_NAME "mkdir")

add_executable(${TARGET_NAME}
    mkdir.c
)
