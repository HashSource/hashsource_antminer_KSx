unsigned int *__fastcall std::fs::Permissions::set_readonly(unsigned int *result, int a2)
{
  unsigned int v2; // r2

  v2 = *result & 0xFFFFFF6D;
  if ( !a2 )
    v2 |= 0x92u;
  *result = v2;
  return result;
}
