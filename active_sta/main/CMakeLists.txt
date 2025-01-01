# Set the source files and include directories for the component
set(SRC_FILES "main.cc")
set(REQUIRES "esp_wifi")
set(INCLUDE_DIRS ".")

# Register the component with source files and include directories
set(COMPONENT_SRCS ${SRC_FILES})
set(COMPONENT_ADD_INCLUDEDIRS ${INCLUDE_DIRS})

# Register the component (required for ESP-IDF v3.x)
register_component()
