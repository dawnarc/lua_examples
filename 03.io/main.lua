
local file = io.open("foo.txt", "rb")
local size = file:seek("end")
print("file size:" .. size)
