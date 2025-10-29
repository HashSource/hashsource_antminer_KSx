int __fastcall alloc::fmt::format::format_inner(signed int *a1, _DWORD *a2)
{
  int v3; // r1
  int v5; // r0
  int v6; // r1
  signed int v7; // r6
  int *v8; // r2
  int v9; // t1
  bool v10; // cf
  int v11; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r6
  int v15; // r7
  int v16; // r12
  int result; // r0
  signed int *v18; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v19[6]; // [sp+8h] [bp-18h] BYREF

  v3 = a2[3];
  if ( v3 )
  {
    v5 = a2[2];
    v6 = 8 * v3;
    v7 = 0;
    v8 = (int *)(v5 + 4);
    do
    {
      v9 = *v8;
      v8 += 2;
      v6 -= 8;
      v7 += v9;
    }
    while ( v6 );
    if ( !a2[5] )
      goto LABEL_10;
    if ( (unsigned int)v7 <= 0xF && !*(_DWORD *)(v5 + 4) )
      goto LABEL_14;
  }
  else
  {
    v7 = 0;
    if ( !a2[5] )
    {
      v11 = 1;
      goto LABEL_15;
    }
  }
  v10 = __CFADD__(v7, v7);
  v7 *= 2;
  if ( v10 )
  {
LABEL_14:
    v11 = 1;
    v7 = 0;
    goto LABEL_15;
  }
LABEL_10:
  if ( !v7 )
    goto LABEL_14;
  if ( v7 <= -1 )
    alloc::raw_vec::capacity_overflow();
  v11 = _rust_alloc(v7);
  if ( !v11 )
    alloc::alloc::handle_alloc_error();
LABEL_15:
  a1[1] = v11;
  a1[2] = 0;
  *a1 = v7;
  v18 = a1;
  v12 = a2[1];
  v13 = a2[2];
  v14 = a2[3];
  v15 = a2[4];
  v16 = a2[5];
  v19[0] = *a2;
  v19[1] = v12;
  v19[2] = v13;
  v19[3] = v14;
  v19[4] = v15;
  v19[5] = v16;
  result = core::fmt::write(&v18, &off_2E26FC, v19);
  if ( result )
    core::result::unwrap_failed((int)aAFormattingTra, 51, (int)v19, (int)&off_2E2724, (int)&off_2E2844);
  return result;
}
