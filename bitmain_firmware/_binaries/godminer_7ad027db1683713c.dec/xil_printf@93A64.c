void xil_printf(const char8 *ctrl1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, ctrl1);
  json_vsprintf((char *)ctrl1, varg_r1);
}
