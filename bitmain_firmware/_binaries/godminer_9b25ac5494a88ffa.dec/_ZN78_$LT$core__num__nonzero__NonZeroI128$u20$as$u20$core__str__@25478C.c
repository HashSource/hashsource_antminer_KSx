int __fastcall <core::num::nonzero::NonZeroI128 as core::str::traits::FromStr>::from_str(
        int a1,
        unsigned __int8 *a2,
        unsigned int a3)
{
  char v4; // r0
  int v6; // r12
  int v7; // r2
  int v8; // lr
  _BYTE v9[8]; // [sp+0h] [bp-18h] BYREF
  __int64 v10; // [sp+8h] [bp-10h]
  __int64 v11; // [sp+10h] [bp-8h]

  sub_243200(v9, a2, a3, 0xAu);
  if ( v9[0] )
  {
    v4 = v9[1];
LABEL_3:
    *(_BYTE *)(a1 + 1) = v4;
    *(_BYTE *)a1 = 1;
    return 1;
  }
  v6 = HIDWORD(v11);
  v7 = HIDWORD(v10);
  v8 = v11;
  if ( !(v10 | v11) )
  {
    v4 = 4;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 8) = v10;
  *(_DWORD *)(a1 + 12) = v7;
  *(_DWORD *)(a1 + 16) = v8;
  *(_DWORD *)(a1 + 20) = v6;
  *(_BYTE *)a1 = 0;
  return 0;
}
