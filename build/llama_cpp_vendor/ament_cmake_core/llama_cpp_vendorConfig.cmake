# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_llama_cpp_vendor_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED llama_cpp_vendor_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(llama_cpp_vendor_FOUND FALSE)
  elseif(NOT llama_cpp_vendor_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(llama_cpp_vendor_FOUND FALSE)
  endif()
  return()
endif()
set(_llama_cpp_vendor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT llama_cpp_vendor_FIND_QUIETLY)
  message(STATUS "Found llama_cpp_vendor: 3.8.3 (${llama_cpp_vendor_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'llama_cpp_vendor' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${llama_cpp_vendor_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(llama_cpp_vendor_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${llama_cpp_vendor_DIR}/${_extra}")
endforeach()
