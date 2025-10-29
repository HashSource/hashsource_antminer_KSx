int __fastcall <core::num::nonzero::NonZeroI64 as core::str::traits::FromStr>::from_str(
        int a1,
        unsigned __int8 *a2,
        unsigned int a3)
{
  char v4; // r0
  _BYTE v6[8]; // [sp+0h] [bp-10h] BYREF
  __int64 v7; // [sp+8h] [bp-8h]

  sub_24459C((int)v6, a2, a3, 0xAu);
  if ( v6[0] )
  {
    v4 = v6[1];
LABEL_3:
    *(_BYTE *)(a1 + 1) = v4;
    *(_BYTE *)a1 = 1;
    return 1;
  }
  if ( !v7 )
  {
    v4 = 4;
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 8) = v7;
  *(_BYTE *)a1 = 0;
  return 0;
}
