cl /EHsc /W4 /c say-something.cpp
link /dll say-something.obj

cl /EHsc /W4 hello.cpp say-something.lib
