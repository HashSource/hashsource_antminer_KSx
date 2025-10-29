float core::f32::<impl f32>::to_bits::ct_f32_to_u32()
{
  float v0; // s0
  float result; // r0
  _DWORD v2[6]; // [sp+0h] [bp-18h] BYREF

  if ( v0 == INFINITY )
    return v0;
  result = v0;
  if ( (LODWORD(v0) & 0x7FFFFFFF) != 0 && (LODWORD(v0) & 0x7F800000) == 0 )
  {
    v2[2] = &off_2CF9C4;
    v2[3] = 1;
    v2[5] = 0;
    v2[0] = 0;
    v2[4] = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v2, (int)&off_2CF9CC);
  }
  return result;
}
