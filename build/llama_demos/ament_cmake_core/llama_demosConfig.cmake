# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_llama_demos_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED llama_demos_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(llama_demos_FOUND FALSE)
  elseif(NOT llama_demos_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(llama_demos_FOUND FALSE)
  endif()
  return()
endif()
set(_llama_demos_CONFIG_INCLUDED TRUE)

# output package information
if(NOT llama_demos_FIND_QUIETLY)
  message(STATUS "Found llama_demos: 3.8.3 (${llama_demos_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'llama_demos' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${llama_demos_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(llama_demos_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${llama_demos_DIR}/${_extra}")
endforeach()
