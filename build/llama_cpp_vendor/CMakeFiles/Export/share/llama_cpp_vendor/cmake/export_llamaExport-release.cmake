#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "llama_cpp_vendor::ggml" for configuration "Release"
set_property(TARGET llama_cpp_vendor::ggml APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llama_cpp_vendor::ggml PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libllama_ggml.so"
  IMPORTED_SONAME_RELEASE "libllama_ggml.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS llama_cpp_vendor::ggml )
list(APPEND _IMPORT_CHECK_FILES_FOR_llama_cpp_vendor::ggml "${_IMPORT_PREFIX}/lib/libllama_ggml.so" )

# Import target "llama_cpp_vendor::llama" for configuration "Release"
set_property(TARGET llama_cpp_vendor::llama APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llama_cpp_vendor::llama PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libllama.so"
  IMPORTED_SONAME_RELEASE "libllama.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS llama_cpp_vendor::llama )
list(APPEND _IMPORT_CHECK_FILES_FOR_llama_cpp_vendor::llama "${_IMPORT_PREFIX}/lib/libllama.so" )

# Import target "llama_cpp_vendor::llava" for configuration "Release"
set_property(TARGET llama_cpp_vendor::llava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llama_cpp_vendor::llava PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libllava.so"
  IMPORTED_SONAME_RELEASE "libllava.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS llama_cpp_vendor::llava )
list(APPEND _IMPORT_CHECK_FILES_FOR_llama_cpp_vendor::llava "${_IMPORT_PREFIX}/lib/libllava.so" )

# Import target "llama_cpp_vendor::common" for configuration "Release"
set_property(TARGET llama_cpp_vendor::common APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llama_cpp_vendor::common PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcommon.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS llama_cpp_vendor::common )
list(APPEND _IMPORT_CHECK_FILES_FOR_llama_cpp_vendor::common "${_IMPORT_PREFIX}/lib/libcommon.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
