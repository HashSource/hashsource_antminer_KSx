int __fastcall <core::num::bignum::Big32x40 as core::fmt::Debug>::fmt(int a1, int *a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r7
  int v5; // r11
  int v6; // r5
  int v7; // r6
  int v8; // r4
  int v10; // [sp+4h] [bp-30h] BYREF
  int v11; // [sp+8h] [bp-2Ch] BYREF
  int *v12; // [sp+Ch] [bp-28h] BYREF
  int (__fastcall *v13)(_DWORD, _DWORD); // [sp+10h] [bp-24h]
  int *v14; // [sp+14h] [bp-20h]
  void (__noreturn *v15)(); // [sp+18h] [bp-1Ch]
  void *v16; // [sp+1Ch] [bp-18h] BYREF
  int v17; // [sp+20h] [bp-14h]
  char **v18; // [sp+24h] [bp-10h]
  int v19; // [sp+28h] [bp-Ch]
  int **v20; // [sp+2Ch] [bp-8h]
  int v21; // [sp+30h] [bp-4h]

  v2 = *(_DWORD *)(a1 + 160);
  v10 = 8;
  v4 = v2;
  if ( v2 )
    v4 = v2 - 1;
  if ( v4 > 0x27 )
    core::panicking::panic_bounds_check(v4, 40, (int)&off_2E4600);
  v5 = 1;
  v6 = *a2;
  v7 = a2[1];
  v12 = (int *)(a1 + 4 * v4);
  v18 = &off_2E40F4;
  v20 = &v12;
  v16 = &unk_2A4EC0;
  v13 = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
  v21 = 1;
  v19 = 1;
  v17 = 1;
  if ( !core::fmt::write(v6, v7, (int *)&v16) )
  {
    if ( v4 )
    {
      if ( v2 <= 1 )
        v2 = 1;
      v8 = 4 * v2;
      while ( 1 )
      {
        v11 = *(_DWORD *)(a1 - 8 + v8);
        v15 = sub_23D500;
        v14 = &v10;
        v13 = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
        v12 = &v11;
        v21 = 2;
        v20 = &v12;
        v19 = 1;
        v17 = 1;
        v18 = (char **)&off_2E4610;
        v16 = &unk_2B4578;
        if ( core::fmt::write(v6, v7, (int *)&v16) )
          break;
        v8 -= 4;
        if ( v8 == 4 )
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
