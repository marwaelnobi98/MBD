
set MATLAB=E:\

cd .

if "%1"=="" ("E:\bin\win64\gmake"  -f factorial.mk all) else ("E:\bin\win64\gmake"  -f factorial.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1