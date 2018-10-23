.386
.MODEL FLAT, C
.STACK
.data

	;msg BYTE "Hola Hrupo", 10

.code

agua PROC
	push ebp
	mov ebp, esp
	mov ebx, 1500
	mul ebx
	pop ebp
ret
agua ENDP

energia PROC
	push ebp
	mov ebp, esp
	mov ebx, 130
	mul ebx
	pop ebp
ret
energia ENDP





END
