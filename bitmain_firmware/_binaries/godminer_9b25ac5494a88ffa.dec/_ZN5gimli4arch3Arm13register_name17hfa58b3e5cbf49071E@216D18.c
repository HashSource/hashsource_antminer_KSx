int __fastcall gimli::arch::Arm::register_name(unsigned __int16 a1)
{
  unsigned int v1; // r1
  int result; // r0

  v1 = a1;
  result = 0;
  if ( v1 >> 5 <= 8 )
    return ((int (__fastcall *)(_DWORD))((char *)dword_216D38 + dword_216D38[v1]))(0);
  return result;
}
