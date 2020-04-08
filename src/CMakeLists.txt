add_library(myclasses
	my_class
	my_other_class
)
target_include_directories(myclasses
	INTERFACE
		${CMAKE_CURRENT_LIST_DIR}
)

add_executable(main
	main
)
target_link_libraries(main
	PRIVATE
		myclasses
)
