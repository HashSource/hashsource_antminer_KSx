int __fastcall core::num::diy_float::Fp::normalize_to(int a1, __int16 a2)
{
  int v3; // r2
  char v4; // r3
  unsigned int v5; // r1
  int v6; // r2
  unsigned int v7; // r4
  unsigned int v8; // r0
  unsigned int v9; // r5
  int result; // r0
  _DWORD v11[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v12[6]; // [sp+8h] [bp-18h] BYREF

  v3 = (__int16)(*(_WORD *)(a1 + 8) - a2);
  if ( v3 < 0 )
    core::panicking::panic((int)aAssertionFaile_31, 29, (int)&off_2CFB34);
  v4 = (*(_BYTE *)(a1 + 8) - a2) & 0x3F;
  v5 = -1;
  v6 = (v3 & 0x3F) - 32;
  v7 = 0xFFFFFFFF >> v4;
  v8 = *(_DWORD *)a1;
  v9 = *(_DWORD *)(a1 + 4);
  if ( v6 >= 0 )
  {
    v7 = 0;
    v5 = 0xFFFFFFFF >> v6;
  }
  v11[1] = v9 & v7;
  v11[0] = v8 & v5;
  if ( __PAIR64__(v7, v5) < __PAIR64__(v9, v8) )
  {
    v12[2] = 0;
    sub_7C1D0((int)v11, a1, v12);
  }
  result = v8 << v4;
  if ( v6 >= 0 )
    return 0;
  return result;
}
