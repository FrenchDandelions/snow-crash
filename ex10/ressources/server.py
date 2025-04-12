from socket import *

def createServer():
    serversocket = socket(AF_INET, SOCK_STREAM)
    serversocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
    serversocket.bind(('0.0.0.0', 6969))
    serversocket.listen(5)
    print("Listening on port 6969...")

    while True:
        clientsocket, address = serversocket.accept()
        # print(f"Connection from {address}")

        # Read data from client
        data = b''
        while True:
            chunk = clientsocket.recv(4096)
            if not chunk:
                break
            data += chunk

        print("Received data:")
        print(data.decode(errors='ignore'))

        # Save to file
        # with open("/tmp/received_file", "wb") as f:
            # f.write(data)
            # print("Saved to /tmp/received_file")

        clientsocket.close()

createServer()
