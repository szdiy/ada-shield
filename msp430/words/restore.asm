; RESTORE copies the first 128 bytes of Info Flash to
; the User Area and subsequent RAM.
        HEADER(RESTORE,7,"RESTORE",DOCOLON)
        DW XT_DOLITERAL,FLASHINFOAREA
	DW XT_DOLITERAL,RAMINFOAREA
	DW XT_DOLITERAL,INFO_SIZE
        DW XT_ITOD,XT_EXIT
