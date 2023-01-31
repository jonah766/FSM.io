#include <iostream>
#include "../include/parser.hpp"

auto main() -> int
{
    std::string_view test_str{"7Vjfk5owEP5reGwHiHj6qGLvnPEcR23vfIwQIW0gTggn3F/fRIL8Umtbrc5cn8x+2V2S/Xa/ATUwCJJHBjf+M3UR0UzdTTRga6Zp6JYufiSSZoj1ADLAY9hVTgUwx+8oj1RojF0UVRw5pYTjTRV0aBgih1cwyBjdVt3WlFSfuoEeagBzB5Im+oJd7mdoJ7+WxJ8Q9vz8yYaudgKYOysg8qFLtyUIDDUwYJTybBUkA0Rk8fK6ZHFfjuzuD8ZQyM8JSMfOujt17AVJkvhpMpkR+Pyppc7G0/zCyBX3VyZl3KceDSEZFmif0Th0kcyqC6vwGVO6EaAhwO+I81SRCWNOBeTzgKhdlGD+KsM/W8palnbsRGXeGWluhJylpSBpLst7RdjOyuOy+8lLHS2bgiIaMwedqFXefpB5iJ/wM/fkiqlANEDiPCKOIQI5fqueA6r29PZ+BYNioUj8DUJV3jdIYvWk2bBnLzWzTcSZ+ysmVp5cvfRGi9HkscF/ld2tjzmab+CuMFsx4lUm1cMQ4yg5Xd9mPVSA2VXzoQTCaCl7W4ybkc+QXxq1tn6lElo3mYnb97d5Zn8f4fPs/t6F9hiDaclhQ3HIo1LmqQRKbdKqtonZqandL/xzXT7mD6yT/mKRnbhoq/3V/7zT2v/V9+LdCW6pvmZDfb/1xiO7KbI+DVZx9E8EFhi1yTkgsJ0D+tq5lr4+fFB9Bfesr3X9a7VP66Vl/p3/XeoxaIzvoDddfJ0N7+4tCbRv/ZbUadRKb1RJ3JdXSwEJ9kKxdsS9EROArAoWn1s9tRFg180mHkX4Ha52qWSNVQOLvFZfs2yZSwx5lM27TB1xRn+gASVU5LVDGsosa0xIDboEG52apFpNNsABMsC1yOg2yDA+DBmgpix7+/JkCLP4Xs9Ep/jXAwx/Ag=="};
    auto res = parser::inflate_string(test_str);
    
    return 0;
}
