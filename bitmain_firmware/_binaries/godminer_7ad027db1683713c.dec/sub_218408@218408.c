int __fastcall sub_218408(int a1, int a2, unsigned int a3, int a4)
{
  int *v4; // r4
  int v8; // r8
  unsigned int v9; // r0
  _BOOL1 v10; // cf
  unsigned int v11; // r5
  int v12; // r7
  _BOOL1 v13; // off
  unsigned int v15; // [sp+4h] [bp-Ch] BYREF
  unsigned int v16[2]; // [sp+8h] [bp-8h] BYREF

  v4 = *(int **)(a1 + 16);
  if ( !v4 )
    return 0;
  v8 = 1;
  if ( <str as core::fmt::Display>::fmt(asc_29BEDA, 1u, v4) )
    return v8;
  if ( !(a3 | a4) )
    return <str as core::fmt::Display>::fmt(asc_29BE75, 1u, v4);
  v9 = *(_DWORD *)(a1 + 20);
  v10 = v9 >= a3;
  v11 = v9 - a3;
  v13 = v10;
  v10 = __CFSUB__(0, a4, v10);
  v12 = -(a4 + !v13);
  if ( !v10 )
  {
    if ( !<str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v4) )
    {
      v8 = 0;
      *(_BYTE *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
    }
    return v8;
  }
  if ( __PAIR64__(v12, v11) < 0x1A )
  {
    v15 = v11 + 97;
    return <char as core::fmt::Display>::fmt(&v15, v4);
  }
  v8 = 1;
  if ( <str as core::fmt::Display>::fmt(asc_29BE75, 1u, v4) )
    return v8;
  v16[0] = v11;
  v16[1] = v12;
  return core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt(v16, (int)v4);
}
