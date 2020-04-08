include(GoogleTest)

function(test_file file)
	if (NOT EXISTS "${CMAKE_CURRENT_LIST_DIR}/${file}.cpp")
		message(FATAL_ERROR "Missing file: ${file}.cpp")
	endif()

	add_executable(${file} ${file})
	target_link_libraries(${file} PRIVATE ${ARGN} gtest gtest_main)
	gtest_discover_tests(${file} DISCOVERY_TIMEOUT 10)
endfunction()
