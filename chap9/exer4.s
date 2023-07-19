# hello.s ＃
# display a string "Hello, world."

.section .rodata
msg:
.ascii "Hello, world.\n"

.section .text
.globl _start
_start:
  li a7, 64
  li a0, 1
  la a1, msg
  li a2, 14
  ecall

  li a7, 93
  li a0, 0
  ecall

