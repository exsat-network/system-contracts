add_contract(mock.vaulta mock.vaulta ${CMAKE_CURRENT_SOURCE_DIR}/src/mock.vaulta.cpp)

target_include_directories(mock.vaulta
   PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/include)

set_target_properties(mock.vaulta
   PROPERTIES
   RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

configure_file( ${CMAKE_CURRENT_SOURCE_DIR}/ricardian/mock.vaulta.contracts.md.in ${CMAKE_CURRENT_BINARY_DIR}/ricardian/mock.vaulta.contracts.md @ONLY )

target_compile_options( mock.vaulta PUBLIC -R${CMAKE_CURRENT_SOURCE_DIR}/ricardian -R${CMAKE_CURRENT_BINARY_DIR}/ricardian )
