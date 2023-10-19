add_Library(cunit
	src/Automated.c
	src/Basic.c
	src/Console.c
	src/CUError.c
	src/MyMem.c
	src/TestDB.c
	src/TestRun.c
	src/Util.c
	src/unitTesting.c
	    )

target_include_directories(cunit PUBLIC inc)