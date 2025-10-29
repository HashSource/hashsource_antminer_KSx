int __fastcall <core::num::bignum::tests::Big8x3 as core::fmt::Debug>::fmt(unsigned int *a1, int *a2)
{
  unsigned int v2; // r7
  unsigned int v4; // r4
  int v5; // r9
  int v6; // r5
  int v7; // r6
  int v9; // [sp+4h] [bp-30h] BYREF
  char v10; // [sp+Bh] [bp-29h] BYREF
  char *v11; // [sp+Ch] [bp-28h] BYREF
  int (__fastcall *v12)(_DWORD, _DWORD); // [sp+10h] [bp-24h]
  int *v13; // [sp+14h] [bp-20h]
  void (__noreturn *v14)(); // [sp+18h] [bp-1Ch]
  void *v15; // [sp+1Ch] [bp-18h] BYREF
  int v16; // [sp+20h] [bp-14h]
  char **v17; // [sp+24h] [bp-10h]
  int v18; // [sp+28h] [bp-Ch]
  char **v19; // [sp+2Ch] [bp-8h]
  int v20; // [sp+30h] [bp-4h]

  v2 = *a1;
  v9 = 2;
  v4 = v2;
  if ( v2 )
    v4 = v2 - 1;
  if ( v4 > 2 )
    core::panicking::panic_bounds_check(v4, 3, (int)&off_2E5618);
  v5 = 1;
  v6 = *a2;
  v7 = a2[1];
  v11 = (char *)a1 + v4 + 4;
  v17 = &off_2E50F4;
  v19 = &v11;
  v15 = &unk_2A5120;
  v12 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
  v20 = 1;
  v18 = 1;
  v16 = 1;
  if ( !core::fmt::write(v6, v7, (int *)&v15) )
  {
    if ( v4 )
    {
      if ( v2 <= 1 )
        v2 = 1;
      while ( 1 )
      {
        v10 = *((_BYTE *)a1 + v2 + 2);
        v14 = sub_23D760;
        v13 = &v9;
        v12 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
        v11 = &v10;
        v20 = 2;
        v19 = &v11;
        v18 = 1;
        v16 = 1;
        v17 = (char **)&off_2E5610;
        v15 = &unk_2B47D8;
        if ( core::fmt::write(v6, v7, (int *)&v15) )
          break;
        if ( --v2 == 1 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
