
.\square.o:     file format pe-x86-64


Disassembly of section .text:

0000000000000000 <_Z6squarei>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	89 4d 10             	mov    %ecx,0x10(%rbp)
   7:	8b 45 10             	mov    0x10(%rbp),%eax
   a:	0f af c0             	imul   %eax,%eax
   d:	5d                   	pop    %rbp
   e:	c3                   	retq   
   f:	90                   	nop
