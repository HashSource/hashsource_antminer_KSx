int __fastcall core::f32::<impl f32>::from_bits::ct_u32_to_f32(int result)
{
  char **v1; // r0
  char **v2; // r1
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  if ( (result & 0x7FFFFFFF) != 0x7F800000 )
  {
    if ( (result & 0x7F800000) != 0 )
    {
      if ( (result & 0x7F800000) == 0x7F800000 )
      {
        v1 = &off_2CEA0C;
        v2 = &off_2CEA14;
        goto LABEL_8;
      }
    }
    else if ( (result & 0x7FFFFF) != 0 )
    {
      v1 = &off_2CE9F4;
      v2 = &off_2CE9FC;
LABEL_8:
      v3[2] = v1;
      v3[3] = 1;
      v3[5] = 0;
      v3[0] = 0;
      v3[4] = aLibraryCoreSrc;
      core::panicking::panic_fmt((int)v3, (int)v2);
    }
  }
  return result;
}
