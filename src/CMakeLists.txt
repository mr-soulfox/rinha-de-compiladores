set(TARGET soulrinha)
add_executable(${TARGET} main.cpp)

target_include_directories(${TARGET} PUBLIC src/inc)

target_compile_features(${TARGET} PUBLIC cxx_std_17)
target_link_libraries(${TARGET} nlohmann_json::nlohmann_json)
