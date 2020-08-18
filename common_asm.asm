
EXTRN __security_init_cookie: proc
EXTRN __security_cookie: qword
EXTRN __intrinsic_setjmp: proc
EXTRN __security_check_cookie: proc
EXTRN __CheckForDebuggerJustMyCode: proc

.code

;initial stuff

stubcontent MACRO count, inner
LOCAL stubcontent

stubcontent:
add		rcx, 38h
mov		rax, qword ptr [rcx]
test	rax, rax
jnz		stubcontent
mov		rcx, qword ptr [rcx + 8]
mov		rax, qword ptr [rcx]
mov		rax, qword ptr [rax+count*8]
jmp		rax
ENDM

stub MACRO name, initial, max
count = initial

WHILE count LT 16
fnname TEXTEQU @CatStr(name, %count)
%fnname	PROC
stubcontent %count, @CatStr(inner, name)
%fnname ENDP
count = count + 1
ENDM
ENDM

;overrides

;stub forwardfunc, 0, 16

end