ELF Header:
  Magic:   7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF32
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              EXEC (Executable file)
  Machine:                           Intel 80386
  Version:                           0x1
  Entry point address:               0x100000
  Start of program headers:          52 (bytes into file)
  Start of section headers:          216384 (bytes into file)
  Flags:                             0x0
  Size of this header:               52 (bytes)
  Size of program headers:           32 (bytes)
  Number of program headers:         5
  Size of section headers:           40 (bytes)
  Number of section headers:         23
  Section header string table index: 22

Section Headers:
  [Nr] Name              Type            Addr     Off    Size   ES Flg Lk Inf Al
  [ 0]                   NULL            00000000 000000 000000 00      0   0  0
  [ 1] .init.text        PROGBITS        00100000 001000 000270 00  AX  0   0  1
  [ 2] .init.data        PROGBITS        00101000 002000 008000 00  WA  0   0 4096
  [ 3] .user.text        PROGBITS        40000000 018000 001411 00  AX  0   0  1
  [ 4] .user.data        PROGBITS        40001414 019414 000004 00  WA  0   0  4
  [ 5] .user.rodata      PROGBITS        40001418 019418 000480 00   A  0   0  4
  [ 6] .user.bss         NOBITS          400018a0 019898 0004c0 00  WA  0   0 32
  [ 7] .text             PROGBITS        c1000000 00a000 00995d 00  AX  0   0  1
  [ 8] .rodata           PROGBITS        c1009960 013960 001ae2 00   A  0   0  4
  [ 9] .data             PROGBITS        c100c000 016000 001b0c 00  WA  0   0 32
  [10] .bss              NOBITS          c100e000 017b0c a053c0 00  WA  0   0 4096
  [11] .debug_info       PROGBITS        00000000 019898 009f0b 00      0   0  1
  [12] .debug_abbrev     PROGBITS        00000000 0237a3 002c86 00      0   0  1
  [13] .debug_aranges    PROGBITS        00000000 026429 0003a0 00      0   0  1
  [14] .debug_ranges     PROGBITS        00000000 0267c9 000060 00      0   0  1
  [15] .debug_line       PROGBITS        00000000 026829 00554d 00      0   0  1
  [16] .debug_str        PROGBITS        00000000 02bd76 002513 01  MS  0   0  1
  [17] .comment          PROGBITS        00000000 02e289 000011 01  MS  0   0  1
  [18] .stab             PROGBITS        00000000 02e29c 002610 0c     19   0  4
  [19] .stabstr          STRTAB          00000000 0308ac 0001d4 00      0   0  1
  [20] .symtab           SYMTAB          00000000 030a80 0029c0 10     21 184  4
  [21] .strtab           STRTAB          00000000 033440 00183c 00      0   0  1
  [22] .shstrtab         STRTAB          00000000 034c7c 0000c4 00      0   0  1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), I (info),
  L (link order), O (extra OS processing required), G (group), T (TLS),
  C (compressed), x (unknown), o (OS specific), E (exclude),
  p (processor specific)

There are no section groups in this file.

Program Headers:
  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align
  LOAD           0x001000 0x00100000 0x00100000 0x00270 0x00270 R E 0x1000
  LOAD           0x002000 0x00101000 0x00101000 0x08000 0x08000 RW  0x1000
  LOAD           0x00a000 0xc1000000 0x01000000 0x0b442 0x0b442 R E 0x1000
  LOAD           0x016000 0xc100c000 0x0100c000 0x01b0c 0xa073c0 RW  0x1000
  LOAD           0x018000 0x40000000 0x40000000 0x01898 0x01d60 RWE 0x1000

 Section to Segment mapping:
  Segment Sections...
   00     .init.text 
   01     .init.data 
   02     .text .rodata 
   03     .data .bss 
   04     .user.text .user.data .user.rodata .user.bss 

There is no dynamic section in this file.

There are no relocations in this file.

The decoding of unwind sections for machine type Intel 80386 is not currently supported.

Symbol table '.symtab' contains 668 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00100000     0 SECTION LOCAL  DEFAULT    1 
     2: 00101000     0 SECTION LOCAL  DEFAULT    2 
     3: 40000000     0 SECTION LOCAL  DEFAULT    3 
     4: 40001414     0 SECTION LOCAL  DEFAULT    4 
     5: 40001418     0 SECTION LOCAL  DEFAULT    5 
     6: 400018a0     0 SECTION LOCAL  DEFAULT    6 
     7: c1000000     0 SECTION LOCAL  DEFAULT    7 
     8: c1009960     0 SECTION LOCAL  DEFAULT    8 
     9: c100c000     0 SECTION LOCAL  DEFAULT    9 
    10: c100e000     0 SECTION LOCAL  DEFAULT   10 
    11: 00000000     0 SECTION LOCAL  DEFAULT   11 
    12: 00000000     0 SECTION LOCAL  DEFAULT   12 
    13: 00000000     0 SECTION LOCAL  DEFAULT   13 
    14: 00000000     0 SECTION LOCAL  DEFAULT   14 
    15: 00000000     0 SECTION LOCAL  DEFAULT   15 
    16: 00000000     0 SECTION LOCAL  DEFAULT   16 
    17: 00000000     0 SECTION LOCAL  DEFAULT   17 
    18: 00000000     0 SECTION LOCAL  DEFAULT   18 
    19: 00000000     0 SECTION LOCAL  DEFAULT   19 
    20: 00000000     0 FILE    LOCAL  DEFAULT  ABS init.c
    21: c10099cc     5 OBJECT  LOCAL  DEFAULT    8 __func__.1905
    22: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_main.c
    23: 40000000    47 FUNC    LOCAL  DEFAULT    3 delay
    24: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_syscall.c
    25: 40000097    92 FUNC    LOCAL  DEFAULT    3 user_syscall
    26: 00000000     0 FILE    LOCAL  DEFAULT  ABS stdio.c
    27: 00000000     0 FILE    LOCAL  DEFAULT  ABS shell.c
    28: 40001ca0   128 OBJECT  LOCAL  DEFAULT    6 cmd_line
    29: 40001d20    64 OBJECT  LOCAL  DEFAULT    6 argv
    30: 400005c1   184 FUNC    LOCAL  DEFAULT    3 user_readline
    31: 40000679   196 FUNC    LOCAL  DEFAULT    3 cmd_parse
    32: 00000000     0 FILE    LOCAL  DEFAULT  ABS string.c
    33: 40000975    44 FUNC    LOCAL  DEFAULT    3 __memset
    34: 40000a07    61 FUNC    LOCAL  DEFAULT    3 __strcmp
    35: 40000abe    61 FUNC    LOCAL  DEFAULT    3 __memcpy
    36: 00000000     0 FILE    LOCAL  DEFAULT  ABS buildin_cmd.c
    37: 40000b41    94 FUNC    LOCAL  DEFAULT    3 path_parse
    38: 40000b9f   330 FUNC    LOCAL  DEFAULT    3 wash_path
    39: 00000000     0 FILE    LOCAL  DEFAULT  ABS asm.c
    40: c100007e    44 FUNC    LOCAL  DEFAULT    7 __memset
    41: c10000cb    61 FUNC    LOCAL  DEFAULT    7 __memcpy
    42: c1000146    61 FUNC    LOCAL  DEFAULT    7 __strcmp
    43: 00000000     0 FILE    LOCAL  DEFAULT  ABS debug.c
    44: 00000000     0 FILE    LOCAL  DEFAULT  ABS monitor.c
    45: 00000000     0 FILE    LOCAL  DEFAULT  ABS readline.c
    46: c100e000  1024 OBJECT  LOCAL  DEFAULT   10 buf
    47: 00000000     0 FILE    LOCAL  DEFAULT  ABS dt.c
    48: c100e400  2048 OBJECT  LOCAL  DEFAULT   10 idt
    49: c100c078     6 OBJECT  LOCAL  DEFAULT    9 gdtinfo
    50: c100ec00   104 OBJECT  LOCAL  DEFAULT   10 ts
    51: c100c080     6 OBJECT  LOCAL  DEFAULT    9 idtinfo
    52: c1000627    54 FUNC    LOCAL  DEFAULT    7 lgdt
    53: c100075c    12 FUNC    LOCAL  DEFAULT    7 lidt
    54: 00000000     0 FILE    LOCAL  DEFAULT  ABS trap.c
    55: c1000961    37 FUNC    LOCAL  DEFAULT    7 hash32
    56: c100c0a0    96 OBJECT  LOCAL  DEFAULT    9 IA32flags
    57: c1000b9e   305 FUNC    LOCAL  DEFAULT    7 trap_dispatch
    58: 00000000     0 FILE    LOCAL  DEFAULT  ABS syscall.c
    59: c100180c    37 FUNC    LOCAL  DEFAULT    7 hash32
    60: c1001831    21 FUNC    LOCAL  DEFAULT    7 sys_exit
    61: c1001846    47 FUNC    LOCAL  DEFAULT    7 sys_fork
    62: c1001875    28 FUNC    LOCAL  DEFAULT    7 sys_wait
    63: c1001891    65 FUNC    LOCAL  DEFAULT    7 sys_exec
    64: c10018d2     6 FUNC    LOCAL  DEFAULT    7 sys_yield
    65: c10018d8    17 FUNC    LOCAL  DEFAULT    7 sys_kill
    66: c10018e9    13 FUNC    LOCAL  DEFAULT    7 sys_getpid
    67: c10018f6    41 FUNC    LOCAL  DEFAULT    7 sys_print_char
    68: c100191f    39 FUNC    LOCAL  DEFAULT    7 sys_print_string
    69: c1001946    92 FUNC    LOCAL  DEFAULT    7 sys_print_num
    70: c10019a2    10 FUNC    LOCAL  DEFAULT    7 sys_pgdir
    71: c10019ac    56 FUNC    LOCAL  DEFAULT    7 sys_fdread
    72: c10019e4    46 FUNC    LOCAL  DEFAULT    7 syscall_open
    73: c1001a12    30 FUNC    LOCAL  DEFAULT    7 syscall_close
    74: c1001a30    56 FUNC    LOCAL  DEFAULT    7 syscall_write
    75: c1001a68    60 FUNC    LOCAL  DEFAULT    7 syscall_lseek
    76: c1001aa4    30 FUNC    LOCAL  DEFAULT    7 syscall_unlink
    77: c1001ac2    30 FUNC    LOCAL  DEFAULT    7 syscall_mkdir
    78: c1001ae0    30 FUNC    LOCAL  DEFAULT    7 syscall_rmdir
    79: c1001afe    35 FUNC    LOCAL  DEFAULT    7 syscall_rewinddir
    80: c1001b21    42 FUNC    LOCAL  DEFAULT    7 syscall_getcwd
    81: c1001b4b    30 FUNC    LOCAL  DEFAULT    7 syscall_chdir
    82: c1001b69    44 FUNC    LOCAL  DEFAULT    7 syscall_stat
    83: c1001b95    30 FUNC    LOCAL  DEFAULT    7 syscall_opendir
    84: c1001bb3    30 FUNC    LOCAL  DEFAULT    7 syscall_closedir
    85: c1001bd1    30 FUNC    LOCAL  DEFAULT    7 syscall_readdir
    86: c100c500   216 OBJECT  LOCAL  DEFAULT    9 syscalls
    87: 00000000     0 FILE    LOCAL  DEFAULT  ABS keyboard.c
    88: c100c5e0   256 OBJECT  LOCAL  DEFAULT    9 shiftcode
    89: c100c6e0   256 OBJECT  LOCAL  DEFAULT    9 togglecode
    90: c100c7e0   256 OBJECT  LOCAL  DEFAULT    9 normalmap
    91: c100c8e0   256 OBJECT  LOCAL  DEFAULT    9 shiftmap
    92: c100c9e0   256 OBJECT  LOCAL  DEFAULT    9 ctlmap
    93: c100cae0    16 OBJECT  LOCAL  DEFAULT    9 charcode
    94: 00000000     0 FILE    LOCAL  DEFAULT  ABS main.c
    95: c1001e51    37 FUNC    LOCAL  DEFAULT    7 hash32
    96: c100222f    49 FUNC    LOCAL  DEFAULT    7 print_task1
    97: c1002291    47 FUNC    LOCAL  DEFAULT    7 delay
    98: c1002260    49 FUNC    LOCAL  DEFAULT    7 print_task2
    99: 00000000     0 FILE    LOCAL  DEFAULT  ABS pmm.c
   100: 00000000     0 FILE    LOCAL  DEFAULT  ABS vmm.c
   101: 00000000     0 FILE    LOCAL  DEFAULT  ABS task.c
   102: c1002cd6    37 FUNC    LOCAL  DEFAULT    7 hash32
   103: c100ec80  8192 OBJECT  LOCAL  DEFAULT   10 hash_list
   104: c1010c80     4 OBJECT  LOCAL  DEFAULT   10 last_pid
   105: c1010c84     8 OBJECT  LOCAL  DEFAULT   10 ready_task_list
   106: c1010c8c     4 OBJECT  LOCAL  DEFAULT   10 nr_task
   107: c1003325   211 FUNC    LOCAL  DEFAULT    7 alloc_task
   108: c1003176    80 FUNC    LOCAL  DEFAULT    7 add_link
   109: c10031f9   122 FUNC    LOCAL  DEFAULT    7 add_pid_hash
   110: c100359e    15 FUNC    LOCAL  DEFAULT    7 wakeup_task
   111: c1002ffb    43 FUNC    LOCAL  DEFAULT    7 set_pid_bit
   112: c1003026    43 FUNC    LOCAL  DEFAULT    7 clear_pid_bit
   113: c1003051    65 FUNC    LOCAL  DEFAULT    7 find_free_pid
   114: c1003092    92 FUNC    LOCAL  DEFAULT    7 alloc_pid
   115: c10030ee    30 FUNC    LOCAL  DEFAULT    7 free_pid
   116: c1010c90    21 OBJECT  LOCAL  DEFAULT   10 name.2578
   117: c10031c6    51 FUNC    LOCAL  DEFAULT    7 remove_link
   118: c1003273    71 FUNC    LOCAL  DEFAULT    7 remove_pid_hash
   119: c10032ba   107 FUNC    LOCAL  DEFAULT    7 find_task
   120: c10033f8    29 FUNC    LOCAL  DEFAULT    7 forkret
   121: c1003415   173 FUNC    LOCAL  DEFAULT    7 copy_thread
   122: c100360c   118 FUNC    LOCAL  DEFAULT    7 task_run
   123: c100a048    13 OBJECT  LOCAL  DEFAULT    8 __func__.2646
   124: c100a058    15 OBJECT  LOCAL  DEFAULT    8 __func__.2654
   125: c1003824    92 FUNC    LOCAL  DEFAULT    7 print_taskinfo
   126: c10038a2    28 FUNC    LOCAL  DEFAULT    7 kernel_execve
   127: c10038be     6 FUNC    LOCAL  DEFAULT    7 user_main
   128: 00000000     0 FILE    LOCAL  DEFAULT  ABS pic.c
   129: c100db04     2 OBJECT  LOCAL  DEFAULT    9 irq_mask
   130: c1010ca5     1 OBJECT  LOCAL  DEFAULT   10 did_init
   131: c1003c78    94 FUNC    LOCAL  DEFAULT    7 pic_setmask
   132: 00000000     0 FILE    LOCAL  DEFAULT  ABS serial.c
   133: c1010ca6     1 OBJECT  LOCAL  DEFAULT   10 serial_exists
   134: 00000000     0 FILE    LOCAL  DEFAULT  ABS timer.c
   135: 00000000     0 FILE    LOCAL  DEFAULT  ABS vga.c
   136: c1010ca7     1 OBJECT  LOCAL  DEFAULT   10 cursor_x
   137: c1010ca8     1 OBJECT  LOCAL  DEFAULT   10 cursor_y
   138: c100db08     4 OBJECT  LOCAL  DEFAULT    9 vga_memory
   139: 00000000     0 FILE    LOCAL  DEFAULT  ABS sync.c
   140: c10049f7    37 FUNC    LOCAL  DEFAULT    7 hash32
   141: c100a228    10 OBJECT  LOCAL  DEFAULT    8 __func__.2474
   142: 00000000     0 FILE    LOCAL  DEFAULT  ABS ide-dev.c
   143: c1004c88    40 FUNC    LOCAL  DEFAULT    7 waitdisk
   144: c1004cb0    38 FUNC    LOCAL  DEFAULT    7 insl
   145: c1004cd6    38 FUNC    LOCAL  DEFAULT    7 outsl
   146: c1004cfc   186 FUNC    LOCAL  DEFAULT    7 ide_read_sect
   147: c1004db6   186 FUNC    LOCAL  DEFAULT    7 ide_write_sect
   148: c1004eea    47 FUNC    LOCAL  DEFAULT    7 delay
   149: 00000000     0 FILE    LOCAL  DEFAULT  ABS fs.c
   150: c10050e3    37 FUNC    LOCAL  DEFAULT    7 hash32
   151: c1005108  1171 FUNC    LOCAL  DEFAULT    7 partition_format
   152: c100585e    94 FUNC    LOCAL  DEFAULT    7 path_parse
   153: c100aba4    15 OBJECT  LOCAL  DEFAULT    8 __func__.2533
   154: c1005944   656 FUNC    LOCAL  DEFAULT    7 search_file
   155: c100abb4    12 OBJECT  LOCAL  DEFAULT    8 __func__.2545
   156: c100abc0     9 OBJECT  LOCAL  DEFAULT    8 __func__.2558
   157: c1005e5b    65 FUNC    LOCAL  DEFAULT    7 fd_local2global
   158: c100abcc    16 OBJECT  LOCAL  DEFAULT    8 __func__.2572
   159: c100abdc     9 OBJECT  LOCAL  DEFAULT    8 __func__.2592
   160: c100abe8    10 OBJECT  LOCAL  DEFAULT    8 __func__.2605
   161: c100abf4    11 OBJECT  LOCAL  DEFAULT    8 __func__.2617
   162: c100ac00    10 OBJECT  LOCAL  DEFAULT    8 __func__.2647
   163: c100ac0c    12 OBJECT  LOCAL  DEFAULT    8 __func__.2658
   164: c100ac18    12 OBJECT  LOCAL  DEFAULT    8 __func__.2669
   165: c100ac24    10 OBJECT  LOCAL  DEFAULT    8 __func__.2678
   166: c1006ac8   184 FUNC    LOCAL  DEFAULT    7 get_parent_dir_inode_nr
   167: c100ac30    24 OBJECT  LOCAL  DEFAULT    8 __func__.2691
   168: c1006b80   423 FUNC    LOCAL  DEFAULT    7 get_child_dir_name
   169: c100ac48    11 OBJECT  LOCAL  DEFAULT    8 __func__.2720
   170: 00000000     0 FILE    LOCAL  DEFAULT  ABS dir.c
   171: c100ae68    17 OBJECT  LOCAL  DEFAULT    8 __func__.2213
   172: c100ae7c    15 OBJECT  LOCAL  DEFAULT    8 __func__.2222
   173: c100ae8c    17 OBJECT  LOCAL  DEFAULT    8 __func__.2266
   174: c100aea0     9 OBJECT  LOCAL  DEFAULT    8 __func__.2295
   175: c100aeac    11 OBJECT  LOCAL  DEFAULT    8 __func__.2310
   176: 00000000     0 FILE    LOCAL  DEFAULT  ABS file.c
   177: c1008052    37 FUNC    LOCAL  DEFAULT    7 hash32
   178: c100b350    11 OBJECT  LOCAL  DEFAULT    8 __func__.2557
   179: c100b35c    10 OBJECT  LOCAL  DEFAULT    8 __func__.2587
   180: 00000000     0 FILE    LOCAL  DEFAULT  ABS inode.c
   181: c10092c9   114 FUNC    LOCAL  DEFAULT    7 inode_locate
   182: c100b424    13 OBJECT  LOCAL  DEFAULT    8 __func__.2208
   183: c100b434    14 OBJECT  LOCAL  DEFAULT    8 __func__.2216
   184: c1001764     0 NOTYPE  GLOBAL DEFAULT    7 vector242
   185: c10011bb     0 NOTYPE  GLOBAL DEFAULT    7 vector119
   186: c1008784  1909 FUNC    GLOBAL DEFAULT    7 file_write
   187: c100109b     0 NOTYPE  GLOBAL DEFAULT    7 vector87
   188: c1001092     0 NOTYPE  GLOBAL DEFAULT    7 vector86
   189: c1005e9c    92 FUNC    GLOBAL DEFAULT    7 sys_close
   190: c10085f4   336 FUNC    GLOBAL DEFAULT    7 file_open
   191: c10017d0     0 NOTYPE  GLOBAL DEFAULT    7 vector251
   192: c100021a    48 FUNC    GLOBAL DEFAULT    7 strcpy
   193: c100559b   707 FUNC    GLOBAL DEFAULT    7 mount_partition
   194: c1001de1    25 FUNC    GLOBAL DEFAULT    7 kbd_intr
   195: c1000000    29 FUNC    GLOBAL DEFAULT    7 inb
   196: 4000073d   568 FUNC    GLOBAL DEFAULT    3 my_shell
   197: c10010bf     0 NOTYPE  GLOBAL DEFAULT    7 vector91
   198: c1000eb5     0 NOTYPE  GLOBAL DEFAULT    7 vector33
   199: c100200c   534 FUNC    GLOBAL DEFAULT    7 test_vmm
   200: c10013a4     0 NOTYPE  GLOBAL DEFAULT    7 vector162
   201: 400009a1    33 FUNC    GLOBAL DEFAULT    3 user_memset
   202: c1001608     0 NOTYPE  GLOBAL DEFAULT    7 vector213
   203: 40000ce9   195 FUNC    GLOBAL DEFAULT    3 make_clear_abs_path
   204: c1001158     0 NOTYPE  GLOBAL DEFAULT    7 vector108
   205: c1000f0f     0 NOTYPE  GLOBAL DEFAULT    7 vector43
   206: c1003141    53 FUNC    GLOBAL DEFAULT    7 get_task_name
   207: c10013c8     0 NOTYPE  GLOBAL DEFAULT    7 vector165
   208: c10014b8     0 NOTYPE  GLOBAL DEFAULT    7 vector185
   209: c1001197     0 NOTYPE  GLOBAL DEFAULT    7 vector115
   210: c1611000  4096 OBJECT  GLOBAL DEFAULT   10 new_pdt
   211: 400002a2   769 FUNC    GLOBAL DEFAULT    3 printf
   212: c10011d6     0 NOTYPE  GLOBAL DEFAULT    7 vector122
   213: c100954c   252 FUNC    GLOBAL DEFAULT    7 inode_delete
   214: c1006998    16 FUNC    GLOBAL DEFAULT    7 sys_rewinddir
   215: c1001c66   379 FUNC    GLOBAL DEFAULT    7 kbd_proc_data
   216: c100135c     0 NOTYPE  GLOBAL DEFAULT    7 vector156
   217: c1001788     0 NOTYPE  GLOBAL DEFAULT    7 vector245
   218: c10014e8     0 NOTYPE  GLOBAL DEFAULT    7 vector189
   219: c1000ddb     0 NOTYPE  GLOBAL DEFAULT    7 vector7
   220: c1000fb1     0 NOTYPE  GLOBAL DEFAULT    7 vector61
   221: c1000e64     0 NOTYPE  GLOBAL DEFAULT    7 vector24
   222: 00107000  4096 OBJECT  GLOBAL DEFAULT    2 stack_pt
   223: c1001173     0 NOTYPE  GLOBAL DEFAULT    7 vector111
   224: c100156c     0 NOTYPE  GLOBAL DEFAULT    7 vector200
   225: c10060e3   236 FUNC    GLOBAL DEFAULT    7 sys_lseek
   226: c1001dfa    87 FUNC    GLOBAL DEFAULT    7 kbd_init
   227: c1010cc0    12 OBJECT  GLOBAL DEFAULT   10 highmem_zone
   228: c100945c   214 FUNC    GLOBAL DEFAULT    7 inode_open
   229: c1000fe7     0 NOTYPE  GLOBAL DEFAULT    7 vector67
   230: c100ec68     4 OBJECT  GLOBAL DEFAULT   10 shift
   231: 00105000  4096 OBJECT  GLOBAL DEFAULT    2 pt2
   232: c1001284     0 NOTYPE  GLOBAL DEFAULT    7 vector138
   233: c1001026     0 NOTYPE  GLOBAL DEFAULT    7 vector74
   234: c1000f8d     0 NOTYPE  GLOBAL DEFAULT    7 vector57
   235: c1004017    85 FUNC    GLOBAL DEFAULT    7 cons_intr
   236: c10042f5   285 FUNC    GLOBAL DEFAULT    7 print_char
   237: c1000a46   344 FUNC    GLOBAL DEFAULT    7 print_trapframe
   238: c1001614     0 NOTYPE  GLOBAL DEFAULT    7 vector214
   239: c1001107     0 NOTYPE  GLOBAL DEFAULT    7 vector99
   240: c10074b0  1083 FUNC    GLOBAL DEFAULT    7 sync_dir_entry
   241: c1000d74     0 NOTYPE  GLOBAL DEFAULT    7 __alltraps
   242: c100499b    92 FUNC    GLOBAL DEFAULT    7 cons_getc
   243: c10012a8     0 NOTYPE  GLOBAL DEFAULT    7 vector141
   244: 4000125b   146 FUNC    GLOBAL DEFAULT    3 buildin_mkdir
   245: c100828e   132 FUNC    GLOBAL DEFAULT    7 bitmap_sync
   246: c100141c     0 NOTYPE  GLOBAL DEFAULT    7 vector172
   247: c1001758     0 NOTYPE  GLOBAL DEFAULT    7 vector241
   248: c10063ef  1082 FUNC    GLOBAL DEFAULT    7 sys_mkdir
   249: c10017e8     0 NOTYPE  GLOBAL DEFAULT    7 vector253
   250: c1000db7     0 NOTYPE  GLOBAL DEFAULT    7 vector3
   251: c1000d96     0 NOTYPE  GLOBAL DEFAULT    7 forkrets
   252: c1000dae     0 NOTYPE  GLOBAL DEFAULT    7 vector2
   253: 00103000  4096 OBJECT  GLOBAL DEFAULT    2 pt
   254: c10034c2   220 FUNC    GLOBAL DEFAULT    7 do_fork
   255: c10016b0     0 NOTYPE  GLOBAL DEFAULT    7 vector227
   256: c10035ad    95 FUNC    GLOBAL DEFAULT    7 kernel_thread
   257: c10015e4     0 NOTYPE  GLOBAL DEFAULT    7 vector210
   258: c1007444   108 FUNC    GLOBAL DEFAULT    7 create_dir_entry
   259: c100168c     0 NOTYPE  GLOBAL DEFAULT    7 vector224
   260: c1000efd     0 NOTYPE  GLOBAL DEFAULT    7 vector41
   261: c1000e49     0 NOTYPE  GLOBAL DEFAULT    7 vector21
   262: c1001458     0 NOTYPE  GLOBAL DEFAULT    7 vector177
   263: c10011b2     0 NOTYPE  GLOBAL DEFAULT    7 vector118
   264: c1001002     0 NOTYPE  GLOBAL DEFAULT    7 vector70
   265: c100caf4     4 OBJECT  GLOBAL DEFAULT    9 highmem_end
   266: c1a13000     4 OBJECT  GLOBAL DEFAULT   10 task0
   267: c1004e70    61 FUNC    GLOBAL DEFAULT    7 ide_read
   268: c1000ff9     0 NOTYPE  GLOBAL DEFAULT    7 vector69
   269: c1001728     0 NOTYPE  GLOBAL DEFAULT    7 vector237
   270: c1000fcc     0 NOTYPE  GLOBAL DEFAULT    7 vector64
   271: c1000e7f     0 NOTYPE  GLOBAL DEFAULT    7 vector27
   272: c100123c     0 NOTYPE  GLOBAL DEFAULT    7 vector132
   273: c10014c4     0 NOTYPE  GLOBAL DEFAULT    7 vector186
   274: c1005feb   248 FUNC    GLOBAL DEFAULT    7 sys_read
   275: c1001638     0 NOTYPE  GLOBAL DEFAULT    7 vector217
   276: c1003c3c     0 NOTYPE  GLOBAL DEFAULT    7 kernel_thread_entry
   277: c1000108    22 FUNC    GLOBAL DEFAULT    7 memcpy
   278: c1007f8a   200 FUNC    GLOBAL DEFAULT    7 dir_remove
   279: c1000da5     0 NOTYPE  GLOBAL DEFAULT    7 vector1
   280: c1001464     0 NOTYPE  GLOBAL DEFAULT    7 vector178
   281: c1000ee2     0 NOTYPE  GLOBAL DEFAULT    7 vector38
   282: c100406c    79 FUNC    GLOBAL DEFAULT    7 serial_proc_data
   283: c1001734     0 NOTYPE  GLOBAL DEFAULT    7 vector238
   284: 400005a3    30 FUNC    GLOBAL DEFAULT    3 print_prompt
   285: c1008077    69 FUNC    GLOBAL DEFAULT    7 get_free_slot_in_global
   286: c100030d    62 FUNC    GLOBAL DEFAULT    7 __PANIC
   287: c1000565   194 FUNC    GLOBAL DEFAULT    7 readline
   288: c1001248     0 NOTYPE  GLOBAL DEFAULT    7 vector133
   289: c100101d     0 NOTYPE  GLOBAL DEFAULT    7 vector73
   290: c10012cc     0 NOTYPE  GLOBAL DEFAULT    7 vector144
   291: c10078eb  1186 FUNC    GLOBAL DEFAULT    7 delete_dir_entry
   292: c1010ce0 0x600000 OBJECT  GLOBAL DEFAULT   10 pp
   293: c100024a    12 FUNC    GLOBAL DEFAULT    7 CPU_INVLPG
   294: c10017f4     0 NOTYPE  GLOBAL DEFAULT    7 vector254
   295: 4000021d    19 FUNC    GLOBAL DEFAULT    3 rewinddir
   296: c1001119     0 NOTYPE  GLOBAL DEFAULT    7 vector101
   297: c10015f0     0 NOTYPE  GLOBAL DEFAULT    7 vector211
   298: c1612000 0x300000 OBJECT  GLOBAL DEFAULT   10 user_pt_highmem
   299: c1001434     0 NOTYPE  GLOBAL DEFAULT    7 vector174
   300: c1001770     0 NOTYPE  GLOBAL DEFAULT    7 vector243
   301: c100c040    56 OBJECT  GLOBAL DEFAULT    9 gdt
   302: c100120c     0 NOTYPE  GLOBAL DEFAULT    7 vector128
   303: c1001065     0 NOTYPE  GLOBAL DEFAULT    7 vector81
   304: c1000e07     0 NOTYPE  GLOBAL DEFAULT    7 vector13
   305: c1010cac    12 OBJECT  GLOBAL DEFAULT   10 user_sema
   306: c1000f57     0 NOTYPE  GLOBAL DEFAULT    7 vector51
   307: c1000e1e     0 NOTYPE  GLOBAL DEFAULT    7 vector16
   308: 00102000  4096 OBJECT  GLOBAL DEFAULT    2 pt_init
   309: 400018a0   512 OBJECT  GLOBAL DEFAULT    6 cwd_cache
   310: c100174c     0 NOTYPE  GLOBAL DEFAULT    7 vector240
   311: c1000f72     0 NOTYPE  GLOBAL DEFAULT    7 vector54
   312: c1000e37     0 NOTYPE  GLOBAL DEFAULT    7 vector19
   313: c10026f9   252 FUNC    GLOBAL DEFAULT    7 pmm_alloc
   314: c10010c8     0 NOTYPE  GLOBAL DEFAULT    7 vector92
   315: c10040df    85 FUNC    GLOBAL DEFAULT    7 serial_putc_sub
   316: c100177c     0 NOTYPE  GLOBAL DEFAULT    7 vector244
   317: c100129c     0 NOTYPE  GLOBAL DEFAULT    7 vector140
   318: c1000f21     0 NOTYPE  GLOBAL DEFAULT    7 vector45
   319: c1007d8d   469 FUNC    GLOBAL DEFAULT    7 dir_read
   320: c1001053     0 NOTYPE  GLOBAL DEFAULT    7 vector79
   321: 40000dac    96 FUNC    GLOBAL DEFAULT    3 buildin_pwd
   322: c10016c8     0 NOTYPE  GLOBAL DEFAULT    7 vector229
   323: 4000020b    18 FUNC    GLOBAL DEFAULT    3 rmdir
   324: c1001374     0 NOTYPE  GLOBAL DEFAULT    7 vector158
   325: c1003cd6    51 FUNC    GLOBAL DEFAULT    7 pic_enable
   326: c1001f23   233 FUNC    GLOBAL DEFAULT    7 test_pmm
   327: 40000290    18 FUNC    GLOBAL DEFAULT    3 readdir
   328: c1000eeb     0 NOTYPE  GLOBAL DEFAULT    7 vector39
   329: c1000674   232 FUNC    GLOBAL DEFAULT    7 gdt_init
   330: c10013ec     0 NOTYPE  GLOBAL DEFAULT    7 vector168
   331: c1000ec7     0 NOTYPE  GLOBAL DEFAULT    7 vector35
   332: c1001185     0 NOTYPE  GLOBAL DEFAULT    7 vector113
   333: c100caf0     4 OBJECT  GLOBAL DEFAULT    9 highmem_start
   334: c10011f1     0 NOTYPE  GLOBAL DEFAULT    7 vector125
   335: c1007f62    40 FUNC    GLOBAL DEFAULT    7 dir_is_empty
   336: 40001414     4 OBJECT  GLOBAL DEFAULT    4 argc
   337: c1008312   738 FUNC    GLOBAL DEFAULT    7 file_create
   338: c1a13228     4 OBJECT  GLOBAL DEFAULT   10 second
   339: 400000f3    15 FUNC    GLOBAL DEFAULT    3 user_sys_getpid
   340: c100162c     0 NOTYPE  GLOBAL DEFAULT    7 vector216
   341: 400001c4    35 FUNC    GLOBAL DEFAULT    3 lseek
   342: c1000fc3     0 NOTYPE  GLOBAL DEFAULT    7 vector63
   343: c1000e76     0 NOTYPE  GLOBAL DEFAULT    7 vector26
   344: c10040bb    36 FUNC    GLOBAL DEFAULT    7 serial_intr
   345: c1001518     0 NOTYPE  GLOBAL DEFAULT    7 vector193
   346: c100153c     0 NOTYPE  GLOBAL DEFAULT    7 vector196
   347: c10015d8     0 NOTYPE  GLOBAL DEFAULT    7 vector209
   348: c1000dc0     0 NOTYPE  GLOBAL DEFAULT    7 vector4
   349: c100505f   132 FUNC    GLOBAL DEFAULT    7 test_ide_io
   350: c1001404     0 NOTYPE  GLOBAL DEFAULT    7 vector170
   351: c1003682   165 FUNC    GLOBAL DEFAULT    7 schedule
   352: c100126c     0 NOTYPE  GLOBAL DEFAULT    7 vector136
   353: c1000df2     0 NOTYPE  GLOBAL DEFAULT    7 vector10
   354: c10015b4     0 NOTYPE  GLOBAL DEFAULT    7 vector206
   355: c1001800     0 NOTYPE  GLOBAL DEFAULT    7 vector255
   356: c1002c7a    92 FUNC    GLOBAL DEFAULT    7 setup_pgdir
   357: c1001488     0 NOTYPE  GLOBAL DEFAULT    7 vector181
   358: 4000137f   146 FUNC    GLOBAL DEFAULT    3 buildin_rm
   359: c1610ce0    12 OBJECT  GLOBAL DEFAULT   10 normal_zone
   360: c10070cd   143 FUNC    GLOBAL DEFAULT    7 fs_init
   361: c1000f9f     0 NOTYPE  GLOBAL DEFAULT    7 vector59
   362: c1a13234     4 OBJECT  GLOBAL DEFAULT   10 root_dir
   363: c1001089     0 NOTYPE  GLOBAL DEFAULT    7 vector85
   364: c1001080     0 NOTYPE  GLOBAL DEFAULT    7 vector84
   365: c1003c41     0 NOTYPE  GLOBAL DEFAULT    7 switch_to
   366: c10014a0     0 NOTYPE  GLOBAL DEFAULT    7 vector183
   367: c100065d    23 FUNC    GLOBAL DEFAULT    7 ltr
   368: c1001380     0 NOTYPE  GLOBAL DEFAULT    7 vector159
   369: c10015fc     0 NOTYPE  GLOBAL DEFAULT    7 vector212
   370: c10039b2   650 FUNC    GLOBAL DEFAULT    7 user_task_init
   371: c1000f33     0 NOTYPE  GLOBAL DEFAULT    7 vector47
   372: c10016bc     0 NOTYPE  GLOBAL DEFAULT    7 vector228
   373: c1000f06     0 NOTYPE  GLOBAL DEFAULT    7 vector42
   374: c10003de    47 FUNC    GLOBAL DEFAULT    7 instr_hello
   375: c100118e     0 NOTYPE  GLOBAL DEFAULT    7 vector114
   376: c1001440     0 NOTYPE  GLOBAL DEFAULT    7 vector175
   377: c10012c0     0 NOTYPE  GLOBAL DEFAULT    7 vector143
   378: c100289c   216 FUNC    GLOBAL DEFAULT    7 setup_vpt
   379: c1001224     0 NOTYPE  GLOBAL DEFAULT    7 vector130
   380: c1001794     0 NOTYPE  GLOBAL DEFAULT    7 vector246
   381: c1000deb     0 NOTYPE  GLOBAL DEFAULT    7 vector9
   382: c10012b4     0 NOTYPE  GLOBAL DEFAULT    7 vector142
   383: c1001110     0 NOTYPE  GLOBAL DEFAULT    7 vector100
   384: c100001d    31 FUNC    GLOBAL DEFAULT    7 inw
   385: c100721e   492 FUNC    GLOBAL DEFAULT    7 search_dir_entry
   386: c1001578     0 NOTYPE  GLOBAL DEFAULT    7 vector201
   387: c10038c4   238 FUNC    GLOBAL DEFAULT    7 set_user_cr3
   388: c1003774   176 FUNC    GLOBAL DEFAULT    7 thread_unblock
   389: c1000196    63 FUNC    GLOBAL DEFAULT    7 strrchr
   390: c1000768   491 FUNC    GLOBAL DEFAULT    7 idt_init
   391: 00101000  4096 OBJECT  GLOBAL DEFAULT    2 pdt
   392: c1001f1e     5 FUNC    GLOBAL DEFAULT    7 kernel_main
   393: c1000fa8     0 NOTYPE  GLOBAL DEFAULT    7 vector60
   394: c1000e5b     0 NOTYPE  GLOBAL DEFAULT    7 vector23
   395: c100417a   124 FUNC    GLOBAL DEFAULT    7 timer_init
   396: c1006963    53 FUNC    GLOBAL DEFAULT    7 sys_readdir
   397: c100171c     0 NOTYPE  GLOBAL DEFAULT    7 vector236
   398: c10027f5   167 FUNC    GLOBAL DEFAULT    7 pmm_free
   399: 400001ac    24 FUNC    GLOBAL DEFAULT    3 write
   400: c1005bd4   647 FUNC    GLOBAL DEFAULT    7 sys_open
   401: c10016e0     0 NOTYPE  GLOBAL DEFAULT    7 vector231
   402: c1000fde     0 NOTYPE  GLOBAL DEFAULT    7 vector66
   403: c1000e91     0 NOTYPE  GLOBAL DEFAULT    7 vector29
   404: c1001260     0 NOTYPE  GLOBAL DEFAULT    7 vector135
   405: 40000b11    48 FUNC    GLOBAL DEFAULT    3 user_strcpy
   406: c100427d   120 FUNC    GLOBAL DEFAULT    7 clear
   407: 00106000  4096 OBJECT  GLOBAL DEFAULT    2 pt3
   408: c1001041     0 NOTYPE  GLOBAL DEFAULT    7 vector77
   409: c100040d   125 FUNC    GLOBAL DEFAULT    7 instr_help
   410: c10001d5    69 FUNC    GLOBAL DEFAULT    7 strcat
   411: c100147c     0 NOTYPE  GLOBAL DEFAULT    7 vector180
   412: c10015cc     0 NOTYPE  GLOBAL DEFAULT    7 vector208
   413: c100048a   193 FUNC    GLOBAL DEFAULT    7 instr_game
   414: c10010fe     0 NOTYPE  GLOBAL DEFAULT    7 vector98
   415: c10010f5     0 NOTYPE  GLOBAL DEFAULT    7 vector97
   416: c1002b91   233 FUNC    GLOBAL DEFAULT    7 vmm_map
   417: c100144c     0 NOTYPE  GLOBAL DEFAULT    7 vector176
   418: c1001524     0 NOTYPE  GLOBAL DEFAULT    7 vector194
   419: c1000eac     0 NOTYPE  GLOBAL DEFAULT    7 vector32
   420: 40000245    18 FUNC    GLOBAL DEFAULT    3 chdir
   421: c1001560     0 NOTYPE  GLOBAL DEFAULT    7 vector199
   422: c1003880    24 FUNC    GLOBAL DEFAULT    7 do_exit
   423: 40000a96    40 FUNC    GLOBAL DEFAULT    3 user_strlen
   424: c1001230     0 NOTYPE  GLOBAL DEFAULT    7 vector131
   425: c10017dc     0 NOTYPE  GLOBAL DEFAULT    7 vector252
   426: c1000d9c     0 NOTYPE  GLOBAL DEFAULT    7 vector0
   427: c1003727    77 FUNC    GLOBAL DEFAULT    7 thread_block
   428: c100495d    62 FUNC    GLOBAL DEFAULT    7 cons_putc
   429: c10012d8     0 NOTYPE  GLOBAL DEFAULT    7 vector145
   430: c1a13004     4 OBJECT  GLOBAL DEFAULT   10 task1
   431: c1005ef8   243 FUNC    GLOBAL DEFAULT    7 sys_write
   432: c100114f     0 NOTYPE  GLOBAL DEFAULT    7 vector107
   433: c1000ef4     0 NOTYPE  GLOBAL DEFAULT    7 vector40
   434: c1000d11    31 FUNC    GLOBAL DEFAULT    7 intr_enable
   435: c1001122     0 NOTYPE  GLOBAL DEFAULT    7 vector102
   436: c1008ef9   976 FUNC    GLOBAL DEFAULT    7 file_read
   437: 40000133    47 FUNC    GLOBAL DEFAULT    3 user_print_num
   438: c1000f84     0 NOTYPE  GLOBAL DEFAULT    7 vector56
   439: 40000a57    63 FUNC    GLOBAL DEFAULT    3 user_strrchr
   440: c1000ff0     0 NOTYPE  GLOBAL DEFAULT    7 vector68
   441: c100cb00  4100 OBJECT  GLOBAL DEFAULT    9 task_pidmap
   442: c1000dd2     0 NOTYPE  GLOBAL DEFAULT    7 vector6
   443: c1001218     0 NOTYPE  GLOBAL DEFAULT    7 vector129
   444: c1a133c0     0 NOTYPE  GLOBAL DEFAULT   10 kernel_end
   445: c1001548     0 NOTYPE  GLOBAL DEFAULT    7 vector197
   446: 40000162    24 FUNC    GLOBAL DEFAULT    3 read
   447: c1003f5e   115 FUNC    GLOBAL DEFAULT    7 lpt_putc_sub
   448: c1004134    70 FUNC    GLOBAL DEFAULT    7 serial_putc
   449: c100132c     0 NOTYPE  GLOBAL DEFAULT    7 vector152
   450: c1006936    45 FUNC    GLOBAL DEFAULT    7 sys_closedir
   451: c100c100     0 NOTYPE  GLOBAL DEFAULT    9 __vectors
   452: c10016d4     0 NOTYPE  GLOBAL DEFAULT    7 vector230
   453: c1000ed9     0 NOTYPE  GLOBAL DEFAULT    7 vector37
   454: c10015a8     0 NOTYPE  GLOBAL DEFAULT    7 vector205
   455: c1001398     0 NOTYPE  GLOBAL DEFAULT    7 vector161
   456: c1a13008     4 OBJECT  GLOBAL DEFAULT   10 current
   457: 400001e7    18 FUNC    GLOBAL DEFAULT    3 unlink
   458: c100100b     0 NOTYPE  GLOBAL DEFAULT    7 vector71
   459: c100138c     0 NOTYPE  GLOBAL DEFAULT    7 vector160
   460: c1003fd1    70 FUNC    GLOBAL DEFAULT    7 lpt_putc
   461: c1001620     0 NOTYPE  GLOBAL DEFAULT    7 vector215
   462: c1001368     0 NOTYPE  GLOBAL DEFAULT    7 vector157
   463: 00109000     0 NOTYPE  GLOBAL DEFAULT    2 init_end
   464: c1000d30    32 FUNC    GLOBAL DEFAULT    7 intr_disable
   465: c1000986   192 FUNC    GLOBAL DEFAULT    7 print_regs
   466: c100117c     0 NOTYPE  GLOBAL DEFAULT    7 vector112
   467: 40000a44    19 FUNC    GLOBAL DEFAULT    3 user_strcmp
   468: c1000256    12 FUNC    GLOBAL DEFAULT    7 lcr3
   469: c1912000 0x20000 OBJECT  GLOBAL DEFAULT   10 pt_highmem
   470: c1001494     0 NOTYPE  GLOBAL DEFAULT    7 vector182
   471: c100310c    53 FUNC    GLOBAL DEFAULT    7 set_task_name
   472: c1000e00     0 NOTYPE  GLOBAL DEFAULT    7 vector12
   473: 40000120    19 FUNC    GLOBAL DEFAULT    3 user_print_string
   474: c1001161     0 NOTYPE  GLOBAL DEFAULT    7 vector109
   475: c1000e40     0 NOTYPE  GLOBAL DEFAULT    7 vector20
   476: c1000ce6     7 FUNC    GLOBAL DEFAULT    7 disable_interupt
   477: c10045c8   917 FUNC    GLOBAL DEFAULT    7 printk
   478: c1000f69     0 NOTYPE  GLOBAL DEFAULT    7 vector53
   479: c1000e2e     0 NOTYPE  GLOBAL DEFAULT    7 vector18
   480: 00100000   624 FUNC    GLOBAL DEFAULT    1 init
   481: c1008744    64 FUNC    GLOBAL DEFAULT    7 file_close
   482: c10010e3     0 NOTYPE  GLOBAL DEFAULT    7 vector95
   483: c10022c0    25 FUNC    GLOBAL DEFAULT    7 test_user
   484: c1003898    10 FUNC    GLOBAL DEFAULT    7 do_execve
   485: c10016a4     0 NOTYPE  GLOBAL DEFAULT    7 vector226
   486: c1a13230     4 OBJECT  GLOBAL DEFAULT   10 cur_part
   487: c1000f45     0 NOTYPE  GLOBAL DEFAULT    7 vector49
   488: c1000f18     0 NOTYPE  GLOBAL DEFAULT    7 vector44
   489: 40000afb    22 FUNC    GLOBAL DEFAULT    3 user_memcpy
   490: c100104a     0 NOTYPE  GLOBAL DEFAULT    7 vector78
   491: c1001428     0 NOTYPE  GLOBAL DEFAULT    7 vector173
   492: c100003c    33 FUNC    GLOBAL DEFAULT    7 outb
   493: c10011a9     0 NOTYPE  GLOBAL DEFAULT    7 vector117
   494: c100106e     0 NOTYPE  GLOBAL DEFAULT    7 vector82
   495: c1001674     0 NOTYPE  GLOBAL DEFAULT    7 vector222
   496: c1000de4     0 NOTYPE  GLOBAL DEFAULT    7 vector8
   497: c1001308     0 NOTYPE  GLOBAL DEFAULT    7 vector149
   498: c10000aa    33 FUNC    GLOBAL DEFAULT    7 memset
   499: c1004a1c    54 FUNC    GLOBAL DEFAULT    7 sema_init
   500: c1004b5c   148 FUNC    GLOBAL DEFAULT    7 sema_up
   501: c10016ec     0 NOTYPE  GLOBAL DEFAULT    7 vector232
   502: c1001e76   168 FUNC    GLOBAL DEFAULT    7 main
   503: c1004bf0    79 FUNC    GLOBAL DEFAULT    7 lock_acquire
   504: c1001146     0 NOTYPE  GLOBAL DEFAULT    7 vector106
   505: c100165c     0 NOTYPE  GLOBAL DEFAULT    7 vector220
   506: 40001aa0   512 OBJECT  GLOBAL DEFAULT    6 final_path
   507: c10010b6     0 NOTYPE  GLOBAL DEFAULT    7 vector90
   508: c10013b0     0 NOTYPE  GLOBAL DEFAULT    7 vector163
   509: c1001704     0 NOTYPE  GLOBAL DEFAULT    7 vector234
   510: c10061cf   544 FUNC    GLOBAL DEFAULT    7 sys_unlink
   511: c1000fba     0 NOTYPE  GLOBAL DEFAULT    7 vector62
   512: c1000e6d     0 NOTYPE  GLOBAL DEFAULT    7 vector25
   513: c1001554     0 NOTYPE  GLOBAL DEFAULT    7 vector198
   514: c1004a52    42 FUNC    GLOBAL DEFAULT    7 lock_init
   515: c10011c4     0 NOTYPE  GLOBAL DEFAULT    7 vector120
   516: c100715c   130 FUNC    GLOBAL DEFAULT    7 open_root_dir
   517: c1004a7c   224 FUNC    GLOBAL DEFAULT    7 sema_down
   518: c1001bef   119 FUNC    GLOBAL DEFAULT    7 syscall_trap
   519: c100054b    26 FUNC    GLOBAL DEFAULT    7 getchar
   520: c1000ced     7 FUNC    GLOBAL DEFAULT    7 enable_interupt
   521: 4000026c    18 FUNC    GLOBAL DEFAULT    3 opendir
   522: c1000f4e     0 NOTYPE  GLOBAL DEFAULT    7 vector50
   523: c1000e15     0 NOTYPE  GLOBAL DEFAULT    7 vector15
   524: c1004c3f    73 FUNC    GLOBAL DEFAULT    7 lock_release
   525: 00104000  4096 OBJECT  GLOBAL DEFAULT    2 pt1
   526: 40000e0c   138 FUNC    GLOBAL DEFAULT    3 buildin_cd
   527: c1000cf4    29 FUNC    GLOBAL DEFAULT    7 get_now_intr_status
   528: c1001320     0 NOTYPE  GLOBAL DEFAULT    7 vector151
   529: c1001077     0 NOTYPE  GLOBAL DEFAULT    7 vector83
   530: c10010ad     0 NOTYPE  GLOBAL DEFAULT    7 vector89
   531: c10010a4     0 NOTYPE  GLOBAL DEFAULT    7 vector88
   532: c1000ccf    23 FUNC    GLOBAL DEFAULT    7 trap
   533: c1001470     0 NOTYPE  GLOBAL DEFAULT    7 vector179
   534: c1000ebe     0 NOTYPE  GLOBAL DEFAULT    7 vector34
   535: c1000f2a     0 NOTYPE  GLOBAL DEFAULT    7 vector46
   536: c1000183    19 FUNC    GLOBAL DEFAULT    7 strcmp
   537: c1000d50    19 FUNC    GLOBAL DEFAULT    7 intr_save
   538: c1001254     0 NOTYPE  GLOBAL DEFAULT    7 vector134
   539: c1003e72   236 FUNC    GLOBAL DEFAULT    7 serial_init
   540: c1001680     0 NOTYPE  GLOBAL DEFAULT    7 vector223
   541: c1a1322c     4 OBJECT  GLOBAL DEFAULT   10 jiffies
   542: c1002cfb   768 FUNC    GLOBAL DEFAULT    7 kernel_task_init
   543: c1006d27   493 FUNC    GLOBAL DEFAULT    7 sys_getcwd
   544: 40000230    21 FUNC    GLOBAL DEFAULT    3 getcwd
   545: c1003e29    73 FUNC    GLOBAL DEFAULT    7 delay
   546: c1009648   709 FUNC    GLOBAL DEFAULT    7 inode_release
   547: c1001644     0 NOTYPE  GLOBAL DEFAULT    7 vector218
   548: c10058bc   136 FUNC    GLOBAL DEFAULT    7 path_depth_cnt
   549: c1000384    90 FUNC    GLOBAL DEFAULT    7 run
   550: c10041f6   135 FUNC    GLOBAL DEFAULT    7 print_cursor
   551: c1003d09   288 FUNC    GLOBAL DEFAULT    7 pic_init
   552: c1001698     0 NOTYPE  GLOBAL DEFAULT    7 vector225
   553: c10014d0     0 NOTYPE  GLOBAL DEFAULT    7 vector187
   554: c1000d63    17 FUNC    GLOBAL DEFAULT    7 intr_restore
   555: c10022d9  1056 FUNC    GLOBAL DEFAULT    7 pmm_init
   556: c1610cec    12 OBJECT  GLOBAL DEFAULT   10 dma_zone
   557: c100ec70     4 OBJECT  GLOBAL DEFAULT   10 test_user_task
   558: c1000e9a     0 NOTYPE  GLOBAL DEFAULT    7 vector30
   559: c1001203     0 NOTYPE  GLOBAL DEFAULT    7 vector127
   560: c100150c     0 NOTYPE  GLOBAL DEFAULT    7 vector192
   561: c10013d4     0 NOTYPE  GLOBAL DEFAULT    7 vector166
   562: c1001038     0 NOTYPE  GLOBAL DEFAULT    7 vector76
   563: c100102f     0 NOTYPE  GLOBAL DEFAULT    7 vector75
   564: c1001530     0 NOTYPE  GLOBAL DEFAULT    7 vector195
   565: c1001314     0 NOTYPE  GLOBAL DEFAULT    7 vector150
   566: c1000f96     0 NOTYPE  GLOBAL DEFAULT    7 vector58
   567: c10017ac     0 NOTYPE  GLOBAL DEFAULT    7 vector248
   568: c10011df     0 NOTYPE  GLOBAL DEFAULT    7 vector123
   569: c10010ec     0 NOTYPE  GLOBAL DEFAULT    7 vector96
   570: c100933b   289 FUNC    GLOBAL DEFAULT    7 inode_sync
   571: c1000ea3     0 NOTYPE  GLOBAL DEFAULT    7 vector31
   572: c1001590     0 NOTYPE  GLOBAL DEFAULT    7 vector203
   573: c1002974   293 FUNC    GLOBAL DEFAULT    7 vmm_malloc
   574: c100ec74     4 OBJECT  GLOBAL DEFAULT   10 offset
   575: c1004449   383 FUNC    GLOBAL DEFAULT    7 print_num
   576: c1001290     0 NOTYPE  GLOBAL DEFAULT    7 vector139
   577: c1001338     0 NOTYPE  GLOBAL DEFAULT    7 vector153
   578: c10013bc     0 NOTYPE  GLOBAL DEFAULT    7 vector164
   579: c10011cd     0 NOTYPE  GLOBAL DEFAULT    7 vector121
   580: c1000dc9     0 NOTYPE  GLOBAL DEFAULT    7 vector5
   581: c10013e0     0 NOTYPE  GLOBAL DEFAULT    7 vector167
   582: c1001350     0 NOTYPE  GLOBAL DEFAULT    7 vector155
   583: c10017b8     0 NOTYPE  GLOBAL DEFAULT    7 vector249
   584: c100005d    33 FUNC    GLOBAL DEFAULT    7 outw
   585: c10017c4     0 NOTYPE  GLOBAL DEFAULT    7 vector250
   586: c10071de    64 FUNC    GLOBAL DEFAULT    7 dir_open
   587: c10011e8     0 NOTYPE  GLOBAL DEFAULT    7 vector124
   588: c100116a     0 NOTYPE  GLOBAL DEFAULT    7 vector110
   589: c100c000    36 OBJECT  GLOBAL DEFAULT    9 instr_list
   590: c100159c     0 NOTYPE  GLOBAL DEFAULT    7 vector204
   591: 40000257    21 FUNC    GLOBAL DEFAULT    3 stat
   592: c1000d8b     0 NOTYPE  GLOBAL DEFAULT    7 __trapret
   593: c1000262   171 FUNC    GLOBAL DEFAULT    7 print_seg
   594: c1001278     0 NOTYPE  GLOBAL DEFAULT    7 vector137
   595: c1932000     4 OBJECT  GLOBAL DEFAULT   10 highmem_ptr
   596: c1006829   269 FUNC    GLOBAL DEFAULT    7 sys_opendir
   597: c10017a0     0 NOTYPE  GLOBAL DEFAULT    7 vector247
   598: c1000e52     0 NOTYPE  GLOBAL DEFAULT    7 vector22
   599: c1004412    55 FUNC    GLOBAL DEFAULT    7 print_string
   600: c1001584     0 NOTYPE  GLOBAL DEFAULT    7 vector202
   601: c1001014     0 NOTYPE  GLOBAL DEFAULT    7 vector72
   602: c1000f7b     0 NOTYPE  GLOBAL DEFAULT    7 vector55
   603: c10011fa     0 NOTYPE  GLOBAL DEFAULT    7 vector126
   604: c1000fd5     0 NOTYPE  GLOBAL DEFAULT    7 vector65
   605: c1000e88     0 NOTYPE  GLOBAL DEFAULT    7 vector28
   606: c10013f8     0 NOTYPE  GLOBAL DEFAULT    7 vector169
   607: c10016f8     0 NOTYPE  GLOBAL DEFAULT    7 vector233
   608: 4000002f   104 FUNC    GLOBAL DEFAULT    3 user_main
   609: 40000102    30 FUNC    GLOBAL DEFAULT    3 user_print_char
   610: c1000953    14 FUNC    GLOBAL DEFAULT    7 set_ts_esp0
   611: c10012f0     0 NOTYPE  GLOBAL DEFAULT    7 vector147
   612: 40001d60     0 NOTYPE  GLOBAL DEFAULT    6 user_end
   613: c1001134     0 NOTYPE  GLOBAL DEFAULT    7 vector104
   614: c10011a0     0 NOTYPE  GLOBAL DEFAULT    7 vector116
   615: c1002a99   248 FUNC    GLOBAL DEFAULT    7 vmm_free
   616: c100990d    80 FUNC    GLOBAL DEFAULT    7 inode_init
   617: c1a1300c     4 OBJECT  GLOBAL DEFAULT   10 user_task
   618: c1a13240   384 OBJECT  GLOBAL DEFAULT   10 file_table
   619: c1000f60     0 NOTYPE  GLOBAL DEFAULT    7 vector52
   620: c1000e27     0 NOTYPE  GLOBAL DEFAULT    7 vector17
   621: c10014ac     0 NOTYPE  GLOBAL DEFAULT    7 vector184
   622: c100011e    40 FUNC    GLOBAL DEFAULT    7 strlen
   623: 4000017a    32 FUNC    GLOBAL DEFAULT    3 open
   624: c10069a8   288 FUNC    GLOBAL DEFAULT    7 sys_rmdir
   625: c10015c0     0 NOTYPE  GLOBAL DEFAULT    7 vector207
   626: c10014f4     0 NOTYPE  GLOBAL DEFAULT    7 vector190
   627: c1006f14   300 FUNC    GLOBAL DEFAULT    7 sys_stat
   628: c1001740     0 NOTYPE  GLOBAL DEFAULT    7 vector239
   629: c10010da     0 NOTYPE  GLOBAL DEFAULT    7 vector94
   630: c10010d1     0 NOTYPE  GLOBAL DEFAULT    7 vector93
   631: c10014dc     0 NOTYPE  GLOBAL DEFAULT    7 vector188
   632: 40000e96   965 FUNC    GLOBAL DEFAULT    3 buildin_ls
   633: c1000f3c     0 NOTYPE  GLOBAL DEFAULT    7 vector48
   634: 400012ed   146 FUNC    GLOBAL DEFAULT    3 buildin_rmdir
   635: c1001650     0 NOTYPE  GLOBAL DEFAULT    7 vector219
   636: c1a13020   520 OBJECT  GLOBAL DEFAULT   10 cons
   637: c10012fc     0 NOTYPE  GLOBAL DEFAULT    7 vector148
   638: c1001668     0 NOTYPE  GLOBAL DEFAULT    7 vector221
   639: 4000027e    18 FUNC    GLOBAL DEFAULT    3 closedir
   640: c1004f19   326 FUNC    GLOBAL DEFAULT    7 read_main_partition
   641: c100105c     0 NOTYPE  GLOBAL DEFAULT    7 vector80
   642: c1001410     0 NOTYPE  GLOBAL DEFAULT    7 vector171
   643: c1001344     0 NOTYPE  GLOBAL DEFAULT    7 vector154
   644: c100ec6c     1 OBJECT  GLOBAL DEFAULT   10 shell_input
   645: c1000ed0     0 NOTYPE  GLOBAL DEFAULT    7 vector36
   646: c100db0c     0 NOTYPE  GLOBAL DEFAULT    9 kernel_bss
   647: c1001710     0 NOTYPE  GLOBAL DEFAULT    7 vector235
   648: c100113d     0 NOTYPE  GLOBAL DEFAULT    7 vector105
   649: c1007040   141 FUNC    GLOBAL DEFAULT    7 sys_chdir
   650: 400009c2    69 FUNC    GLOBAL DEFAULT    3 user_strcat
   651: c100740a    58 FUNC    GLOBAL DEFAULT    7 dir_close
   652: 00108000  4096 OBJECT  GLOBAL DEFAULT    2 user_pt
   653: c1002222    13 FUNC    GLOBAL DEFAULT    7 test_schedule
   654: 400001f9    18 FUNC    GLOBAL DEFAULT    3 mkdir
   655: c10012e4     0 NOTYPE  GLOBAL DEFAULT    7 vector146
   656: c1008100   192 FUNC    GLOBAL DEFAULT    7 inode_bitmap_alloc
   657: c1001500     0 NOTYPE  GLOBAL DEFAULT    7 vector191
   658: 4000019a    18 FUNC    GLOBAL DEFAULT    3 close
   659: c100112b     0 NOTYPE  GLOBAL DEFAULT    7 vector103
   660: c100034b    57 FUNC    GLOBAL DEFAULT    7 monitor
   661: c1004ead    61 FUNC    GLOBAL DEFAULT    7 ide_write
   662: c10080bc    68 FUNC    GLOBAL DEFAULT    7 task_fd_install
   663: c1009532    26 FUNC    GLOBAL DEFAULT    7 inode_close
   664: c10081c0   206 FUNC    GLOBAL DEFAULT    7 block_bitmap_alloc
   665: c1933000 0xe0000 OBJECT  GLOBAL DEFAULT   10 pt_dma_nomal
   666: c1000df9     0 NOTYPE  GLOBAL DEFAULT    7 vector11
   667: c1000e0e     0 NOTYPE  GLOBAL DEFAULT    7 vector14

No version information found in this file.