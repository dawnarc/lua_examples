if exist "%~dp0\build\" rd /q /s "%~dp0\build"
mkdir build & cd build

cmake -G Ninja -DCMAKE_BUILD_TYPE=Release ../
cmake --build .
cd ..