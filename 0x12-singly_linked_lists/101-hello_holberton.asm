section		.text
	externa printf
	global	main
main:
	mov	edi, msg
	mov	eax, 0
call	printf
section		.data
	msg db "Hello, Holberton", Oxa, 0
