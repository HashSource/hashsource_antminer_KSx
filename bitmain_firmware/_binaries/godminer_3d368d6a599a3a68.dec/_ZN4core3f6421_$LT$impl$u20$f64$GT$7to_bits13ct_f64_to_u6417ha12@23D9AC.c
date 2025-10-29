int core::f64::<impl f64>::to_bits::ct_f64_to_u64()
{
  int v0; // s0
  int v1; // s1
  int result; // r0
  int v3; // r2
  bool v4; // zf
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  result = v0;
  v3 = v1 & 0x7FF00000;
  if ( v0 | v1 & 0xFFFFF )
    goto LABEL_2;
  v4 = v3 == 2146435072;
  if ( v3 != 2146435072 )
    v4 = v3 == 0;
  if ( !v4 )
  {
LABEL_2:
    if ( !v3 )
    {
      v5[2] = &off_2E3A24;
      v5[3] = 1;
      v5[5] = 0;
      v5[0] = 0;
      v5[4] = aLibraryCoreSrc;
      core::panicking::panic_fmt((int)v5, (int)&off_2E3A2C);
    }
  }
  return result;
}
