#include "main.h"
#include "../asm/asm.h"
#include "../dt/dt.h"
#include "../interrupt/trap.h"
#include "../timer/timer.h"
#include "../pic/pic.h"
#include "../vga/vga.h"
#include "../mem/pmm.h"
#include "../mem/vmm.h"
#include "../debug/debug.h"

void main(void)
{
	clear();
	
    printk("FreeFlyOS is running\n");
   // print_seg();
    
    gdt_init();
   // printk("After gdt init\n");
    print_seg();

    pic_init();
    idt_init();
    timer_init(200);

    enable_interupt();

    serial_init();
    kbd_init();

    setup_vpt();
    pmm_init();
    printk("successful\n");
    while(1);
}