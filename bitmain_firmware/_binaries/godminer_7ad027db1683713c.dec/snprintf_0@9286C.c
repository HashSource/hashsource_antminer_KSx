double *snprintf_0(glf *this, char *a2, _BYTE *a3, const char *a4, ...)
{
  int varg_r3; // [sp+14h] [bp+8h] BYREF

  return json_vpack_ex((char *)this, (int)a2, a3, &varg_r3);
}
