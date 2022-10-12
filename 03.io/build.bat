::clean cache
if exist "%~dp0\build\" rd /q /s "%~dp0\build"
mkdir build & cd build

::build
cmake -G Ninja -DCMAKE_BUILD_TYPE=Release ../
cmake --build .
cd ..

::run test case
start "" "CMD " /c %~dp0build\TestIO.exe %~dp0/main.lua ^& pause