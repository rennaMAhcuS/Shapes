add_library(shapes_core
        Canvas.cpp
        Circle.cpp
        Ellipse.cpp
        Rectangle.cpp
        Shape.cpp
        Square.cpp
)

target_include_directories(shapes_core PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(shapes_core
        PRIVATE sfml-graphics sfml-window sfml-system
)
