echo Running 1 checker test(s)
echo Running 1 checker test(s) 1> checker-tests.log
echo Running test #1 1>> checker-tests.log
echo Checker comment: 1>> checker-tests.log
check.exe files\tests\checker-tests\01 files\tests\checker-tests\01.o files\tests\checker-tests\01.a 2>> checker-tests.log
if not %ERRORLEVEL% EQU 0 (
    echo Checker returned incorrect verdict. Expected: OK 1>> checker-tests.log
    echo Checker returned incorrect verdict. Expected: OK. See checker-tests.log for checker comment
    pause 0
)
del /F /Q checker-tests.log
echo Checker test(s) finished
