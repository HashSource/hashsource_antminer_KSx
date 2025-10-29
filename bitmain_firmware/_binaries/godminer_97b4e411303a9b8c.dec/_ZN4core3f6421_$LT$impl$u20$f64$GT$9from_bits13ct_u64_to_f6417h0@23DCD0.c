int __fastcall core::f64::<impl f64>::from_bits::ct_u64_to_f64(int result, int a2)
{
  char **v2; // r0
  char **v3; // r1
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  if ( result | a2 & 0x7FFFFFFF ^ 0x7FF00000 )
  {
    if ( (a2 & 0x7FF00000) != 0 )
    {
      if ( (a2 & 0x7FF00000) == 0x7FF00000 )
      {
        v2 = &off_2E4A6C;
        v3 = &off_2E4A74;
        goto LABEL_8;
      }
    }
    else if ( result | a2 & 0xFFFFF )
    {
      v2 = &off_2E4A54;
      v3 = &off_2E4A5C;
LABEL_8:
      v4[2] = v2;
      v4[3] = 1;
      v4[5] = 0;
      v4[0] = 0;
      v4[4] = aLibraryCoreSrc;
      core::panicking::panic_fmt((int)v4, (int)v3);
    }
  }
  return result;
}
