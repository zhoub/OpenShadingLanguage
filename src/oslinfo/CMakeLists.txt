SET ( oslinfo_srcs oslinfo.cpp )
ADD_EXECUTABLE ( oslinfo ${oslinfo_srcs} )
<<<<<<< HEAD
TARGET_LINK_LIBRARIES ( oslinfo oslquery ${OPENIMAGEIO_LIBRARIES} ${Boost_LIBRARIES} ${CMAKE_DL_LIBS})
=======
TARGET_LINK_LIBRARIES ( oslinfo oslquery ${OPENIMAGEIO_LIBRARIES} ${Boost_LIBRARIES} ${CMAKE_DL_LIBS} )
>>>>>>> c0497d6... Fixed build about using static OIIO.
INSTALL ( TARGETS oslinfo RUNTIME DESTINATION bin )
