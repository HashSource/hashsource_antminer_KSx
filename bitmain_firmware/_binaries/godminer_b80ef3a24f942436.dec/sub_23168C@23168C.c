int __fastcall sub_23168C(int a1, char a2)
{
  char *v3; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r4
  unsigned int v8; // r7
  int v9; // r6
  unsigned int v10; // r3
  bool v11; // cf
  int v12; // r2
  int v13; // r6
  int v15; // r2
  char *v16; // r7
  unsigned int v17; // r8
  unsigned int v18; // r2
  unsigned int v19; // r3
  int v20; // r5
  unsigned int v21; // r1
  unsigned int v22[2]; // [sp+8h] [bp-8h] BYREF

  v3 = *(char **)a1;
  if ( !v3 )
  {
    v15 = *(_DWORD *)(a1 + 16);
    if ( v15 )
      return <str as core::fmt::Display>::fmt(asc_2BC429, 1, v15);
    return 0;
  }
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(a1 + 8);
  v7 = v6;
  v8 = v5;
  if ( v6 > v5 )
    v8 = *(_DWORD *)(a1 + 8);
  do
  {
    if ( v7 == v8 )
      goto LABEL_15;
    v9 = (unsigned __int8)v3[v7];
    v10 = v7++;
    *(_DWORD *)(a1 + 8) = v7;
    v11 = (unsigned int)(v9 - 48) >= 0xA;
    if ( (unsigned int)(v9 - 48) >= 0xA )
      v11 = (unsigned int)(v9 - 97) >= 6;
  }
  while ( !v11 );
  if ( v9 != 95 )
  {
LABEL_15:
    v12 = *(_DWORD *)(a1 + 16);
    if ( !v12 || (v13 = 1, !<str as core::fmt::Display>::fmt(&unk_2BC409, 16, v12)) )
    {
      v13 = 0;
      *(_BYTE *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
    }
    return v13;
  }
  if ( v10 < v6 )
    goto LABEL_14;
  if ( v6 )
  {
    if ( v6 >= v5 )
    {
      if ( v6 != v5 )
LABEL_14:
        core::str::slice_error_fail(v3, v5, v6, v10, (int)&off_2EDC14);
    }
    else if ( v3[v6] <= -65 )
    {
      goto LABEL_14;
    }
  }
  v16 = &v3[v6];
  v17 = v10 - v6;
  if ( sub_22D2A8((int)&v3[v6], v10 - v6) )
  {
    v20 = *(_DWORD *)(a1 + 16);
    v22[0] = v18;
    v22[1] = v19;
    if ( v20 )
    {
      v13 = 1;
      if ( !core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt(v22, v20) )
        goto LABEL_29;
      return v13;
    }
    return 0;
  }
  v20 = *(_DWORD *)(a1 + 16);
  if ( !v20 )
    return 0;
  v13 = 1;
  if ( <str as core::fmt::Display>::fmt(a0x_0, 2, *(_DWORD *)(a1 + 16))
    || <str as core::fmt::Display>::fmt(v16, v17, v20) )
  {
    return v13;
  }
LABEL_29:
  if ( core::fmt::Formatter::alternate(v20) )
    return 0;
  v21 = (unsigned __int8)(a2 - 97);
  if ( v21 >= 0x1A || ((0x3BCFBBFu >> v21) & 1) == 0 )
    core::panicking::panic((int)aCalledOptionUn_1, 43, (int)&off_2EDC74);
  return <str as core::fmt::Display>::fmt(*(&off_2EDCCC + (char)(a2 - 97)), dword_2BC540[(char)(a2 - 97)], v20) != 0;
}
