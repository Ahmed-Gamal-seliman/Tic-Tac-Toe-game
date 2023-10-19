#include "unitTesting.h"
sint8 arr[3][5];
void testAssertPtrEqual(void)
{
  CU_ASSERT_PTR_EQUAL((void*)0x100, (void*)0x100);

  CU_ASSERT_PTR_EQUAL((void*)0x101, (void*)0x101);
}

void testAssertPtrNotEqual(void)
{
  CU_ASSERT_PTR_NOT_EQUAL((void*)0x100, (void*)0x101);

  CU_ASSERT_PTR_NOT_EQUAL((void*)0x100, (void*)0x100);
}


/* Unit Testing For Board.h in Tic-Toe Project */

void TestIntializeBoardSuccess(void)
{	
	CU_ASSERT(IntializeBoard(arr,5) == OK);
}

void TestIntializeBoardFail(void)
{
	CU_ASSERT(IntializeBoard(arr,0) == OK);
}

void TestFillBoardSuccess(void)
{
	CU_ASSERT(FillBoard(arr,2) == OK);
}

void TestFillBoardFail(void)
{
	memset(arr,0,sizeof(arr));
	
	CU_ASSERT(FillBoard(arr,0) == OK);
}

void TestDrawBoardSuccess(void)
{
	memset(arr,0,sizeof(arr));
	CU_ASSERT(DrawBoard(arr,5) == OK);
}

void TestDrawBoardFail(void)
{
	memset(arr,0,sizeof(arr));
	CU_ASSERT(DrawBoard(arr,0) == OK);
}

void TestUpDateBoardSuccess(void)
{
	memset(arr,0,sizeof(arr));
	
	CU_ASSERT(UpDateBoard(arr,1,'x') == OK);
}

void TestUpDateBoardFail(void)
{
	memset(arr,0,sizeof(arr));
	
	CU_ASSERT(UpDateBoard(arr,1,'z') == OK);
}


/* Unit Testing For GameOperations.h in Tic-Toe Project */

void TestCheckNumberBoardChoosenSuccess(void)
{
    sint32 checkNumberBoard;
	CU_ASSERT(CheckNumberBoardChoosen(1,&checkNumberBoard) == OK);
}

void TestCheckNumberBoardChoosenFail(void)
{
	sint32 checkNumberBoard;
	CU_ASSERT(CheckNumberBoardChoosen(-1,&checkNumberBoard) == OK);
}


CU_TestInfo tests_GameOperation[] = {
	
  { "Test Check Number Board Choosen Success", TestCheckNumberBoardChoosenSuccess },
  { "Test Check Number Board Choosen Fail", TestCheckNumberBoardChoosenFail },
  
	CU_TEST_INFO_NULL,
};


CU_TestInfo tests_Board[] = {
  { "Test intialize board Success", TestIntializeBoardSuccess },
  { "Test intialize board Fail", TestIntializeBoardFail },
  { "Test Test Fill Board Success", TestFillBoardSuccess },
  { "Test Test Fill Board Fail", TestFillBoardFail },
  { "Test Test Draw Board Success", TestDrawBoardSuccess },
  { "Test Test Draw Board Fail", TestDrawBoardFail },
  { "Test Test UpDate Board Success", TestUpDateBoardSuccess },
  { "Test Test UpDate Board Fail", TestUpDateBoardFail },
	CU_TEST_INFO_NULL,
};



CU_TestInfo tests_ptr[] = {
  { "testAssertPtrEqual", testAssertPtrEqual },
  { "testAssertPtrNotEqual", testAssertPtrNotEqual },
	CU_TEST_INFO_NULL,
};





static CU_SuiteInfo suites[] = {
  { "Test  board",   NULL,               NULL,   NULL,    NULL,         tests_Board},
  { "Test Game Operations",   NULL,               NULL,   NULL,    NULL, tests_GameOperation},
	CU_SUITE_INFO_NULL,
};

 void AddTests(void)
{
	assert(NULL != CU_get_registry());
	assert(!CU_is_test_running());

	/* Register suites. */
	if (CU_register_suites(suites) != CUE_SUCCESS) {
		fprintf(stderr, "suite registration failed - %s\n",
			CU_get_error_msg());
		exit(EXIT_FAILURE);
	}
}

 void run(){
	 CU_BasicRunMode mode = CU_BRM_VERBOSE;
	 CU_ErrorAction error_action = CUEA_IGNORE;
	 if (CU_initialize_registry()) {
		printf("\nInitialization of Test Registry failed.");
	 }
	 else {
		AddTests();

		CU_set_error_action(error_action);
	
		CU_automated_run_tests();
		CU_cleanup_registry();
	  }
 }

