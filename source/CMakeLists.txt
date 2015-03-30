add_library (LogMakerLib LogMaker.h LogMaker.cpp)

install (TARGETS LogMakerLib DESTINATION bin)
#I thing which file's headers is uncessary, but let's keep them here
install (FILES LogMaker.h DESTINATION include)

