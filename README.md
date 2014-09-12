ecen602_hw1
===========

The programming assignment for ecen602_hw1

Major points in the assignment
==============================
1. Server has finite number of clients.
2. Client will receive a list of connected clients once they complete the JOIN handshake
3. Clients use SEND to server to carry chat texts.
4. Servers uses FWD message to send chat text to client.
5. Clients can exit without warning any time . Server should detect this and clean up the resource and notify other clients.
6. A client can detect idle clients.


