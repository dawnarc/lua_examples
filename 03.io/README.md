# Lua IO example

### How to get file size?

``` Lua
local file = io.open(fileName, "rb")
file:seek("end")
```

### How to delete file

``` Lua
os.remove(path)
```

Origin:  
How to get the file size and delete file in Lua?  
https://stackoverflow.com/a/10712925/1645289