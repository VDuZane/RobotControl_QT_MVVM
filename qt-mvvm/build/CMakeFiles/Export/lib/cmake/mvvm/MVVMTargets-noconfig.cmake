#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MVVM::Model" for configuration ""
set_property(TARGET MVVM::Model APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(MVVM::Model PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmvvm_model.so.0.2.0"
  IMPORTED_SONAME_NOCONFIG "libmvvm_model.so.0.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS MVVM::Model )
list(APPEND _IMPORT_CHECK_FILES_FOR_MVVM::Model "${_IMPORT_PREFIX}/lib/libmvvm_model.so.0.2.0" )

# Import target "MVVM::ViewModel" for configuration ""
set_property(TARGET MVVM::ViewModel APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(MVVM::ViewModel PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmvvm_viewmodel.so.0.2.0"
  IMPORTED_SONAME_NOCONFIG "libmvvm_viewmodel.so.0.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS MVVM::ViewModel )
list(APPEND _IMPORT_CHECK_FILES_FOR_MVVM::ViewModel "${_IMPORT_PREFIX}/lib/libmvvm_viewmodel.so.0.2.0" )

# Import target "MVVM::View" for configuration ""
set_property(TARGET MVVM::View APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(MVVM::View PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmvvm_view.so.0.2.0"
  IMPORTED_SONAME_NOCONFIG "libmvvm_view.so.0.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS MVVM::View )
list(APPEND _IMPORT_CHECK_FILES_FOR_MVVM::View "${_IMPORT_PREFIX}/lib/libmvvm_view.so.0.2.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
