
.\main.o:     file format pe-x86-64


Disassembly of section .text:

0000000000000000 <_Z6squarei>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	89 4d 10             	mov    %ecx,0x10(%rbp)
   7:	b8 00 00 00 00       	mov    $0x0,%eax
   c:	5d                   	pop    %rbp
   d:	c3                   	retq   

000000000000000e <main>:
   e:	55                   	push   %rbp
   f:	48 89 e5             	mov    %rsp,%rbp
  12:	48 83 ec 20          	sub    $0x20,%rsp
  16:	e8 00 00 00 00       	callq  1b <main+0xd>
			17: R_X86_64_PC32	__main
  1b:	b9 02 00 00 00       	mov    $0x2,%ecx
  20:	e8 db ff ff ff       	callq  0 <_Z6squarei>
  25:	90                   	nop
  26:	48 83 c4 20          	add    $0x20,%rsp
  2a:	5d                   	pop    %rbp
  2b:	c3                   	retq   
  2c:	90                   	nop
  2d:	90                   	nop
  2e:	90                   	nop
  2f:	90                   	nop

.\main.o:     file format pe-x86-64


Disassembly of section .text:

0000000000000000 <_Z6squarei>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	89 4d 10             	mov    %ecx,0x10(%rbp)
   7:	b8 00 00 00 00       	mov    $0x0,%eax
   c:	5d                   	pop    %rbp
   d:	c3                   	retq   

000000000000000e <main>:
   e:	55                   	push   %rbp
   f:	48 89 e5             	mov    %rsp,%rbp
  12:	48 83 ec 20          	sub    $0x20,%rsp
  16:	e8 00 00 00 00       	callq  1b <main+0xd>
			17: R_X86_64_PC32	__main
  1b:	b9 02 00 00 00       	mov    $0x2,%ecx
  20:	e8 db ff ff ff       	callq  0 <_Z6squarei>
  25:	90                   	nop
  26:	48 83 c4 20          	add    $0x20,%rsp
  2a:	5d                   	pop    %rbp
  2b:	c3                   	retq   
  2c:	90                   	nop
  2d:	90                   	nop
  2e:	90                   	nop
  2f:	90                   	nop
