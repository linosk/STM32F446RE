MEMORY
{
  flash  (rx)  : ORIGIN = 0x08000000, LENGTH = 512K
  ram    (xrw) : ORIGIN = 0x20000000, LENGTH = 112K
  ccmram (xrw) : ORIGIN = 0x10000000, LENGTH = 16K
}

_eram = ORIGIN(ram) + LENGTH(ram);
_stack = _eram;

SECTIONS
{
  .text : ALIGN(4)
  {
    KEEP(*(.ivt))
    *(.text*)
    . = ALIGN(4);
    _etext = .;
  } > flash

  /* .init_array : ALIGN(4)
  {
    __init_array_start = .;
    KEEP(*(.init_array*))
    __init_array_end = .;
    . = ALIGN(4);
  } > flash */

  _idata = LOADADDR(.data);

  .data : ALIGN(4)
  {
    _data = .;
    *(.data*)
    . = ALIGN(4);
    _edata = .;
  } > ram AT > flash

  .bss : ALIGN(4)
  {
    _bss = .;
    *(.bss*)
    . = ALIGN(4);
    _ebss = .;
    PROVIDE(_end = .);
  } > ram
}