extern int main(void);

extern unsigned int _stack;
extern unsigned int _idata;
extern unsigned int _data;
extern unsigned int _edata;
extern unsigned int _bss;
extern unsigned int _ebss;


static void copy_data(void)
{
    unsigned int *src_data_ptr = &_idata;
    unsigned int *dst_data_ptr = &_data;
    while(dst_data_ptr < &_edata)
    {
        *dst_data_ptr++ = *src_data_ptr++;
    }
}

static void clear_bss(void)
{
    unsigned int *bss_ptr = &_bss;
    while(bss_ptr < &_ebss)
    {
        *bss_ptr++ = 0;
    }
}

void isr_reset(void)
{
    copy_data();
    clear_bss();
    main();
    
    while(1);
}

void isr_nmi(void)
{
    while(1);
}

void isr_hardfault(void)
{
    while(1);
}

void isr_memmanage(void)
{
    while(1);
}

void isr_busfault(void)
{
    while(1);
}

void isr_usagefault(void)
{
    while(1);
}

void isr_svcall(void)
{
    while(1);
}

void isr_debugmonitor(void)
{
    while(1);
}

void isr_pendsv(void)
{
    while(1);
}

void isr_systick(void)
{
    while(1);
}

void isr_wwdg(void)
{
    while(1);
}

void isr_pvd(void)
{
    while(1);
}

void isr_tamp_stamp(void)
{
    while(1);
}

void isr_rtc_wkup(void)
{
    while(1);
}

void isr_flash(void)
{
    while(1);
}

void isr_rcc(void)
{
    while(1);
}

#define IVT_ARRAY_SIZE (21)
typedef void (*isr_t)(void);
__attribute__((used,section(".ivt")))
static const isr_t ivt[IVT_ARRAY_SIZE] =
{
    (isr_t)&_stack,
    isr_reset,
    isr_nmi,
    isr_hardfault,
    isr_memmanage,
    isr_busfault,
    isr_usagefault,
    0,0,0,0,
    isr_svcall,
    isr_debugmonitor,
    0,
    isr_pendsv,
    isr_systick,
    isr_wwdg,
    isr_pvd,
    isr_tamp_stamp,
    isr_rtc_wkup,
    isr_flash,
    isr_rcc,
};