bool __fastcall <core::str::error::Utf8Error as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  int v2; // r3
  char **v3; // r12
  int v4; // r1
  int v5; // r0
  char v7; // [sp+7h] [bp-29h] BYREF
  char *v8; // [sp+8h] [bp-28h] BYREF
  void *v9; // [sp+Ch] [bp-24h]
  _BYTE *v10; // [sp+10h] [bp-20h]
  int (__fastcall *v11)(unsigned int *, int); // [sp+14h] [bp-1Ch]
  int v12[6]; // [sp+18h] [bp-18h] BYREF

  if ( a1[4] )
  {
    v7 = a1[5];
    v2 = *a2;
    v3 = (char **)&off_2CF378;
    v4 = a2[1];
    v11 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v10 = a1;
    v9 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v8 = &v7;
    v5 = 2;
  }
  else
  {
    v2 = *a2;
    v4 = a2[1];
    v3 = &off_2CF370;
    v8 = a1;
    v5 = 1;
    v9 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  }
  v12[4] = (int)&v8;
  v12[5] = v5;
  v12[3] = v5;
  v12[0] = 0;
  v12[2] = (int)v3;
  return core::fmt::write(v2, v4, v12);
}
