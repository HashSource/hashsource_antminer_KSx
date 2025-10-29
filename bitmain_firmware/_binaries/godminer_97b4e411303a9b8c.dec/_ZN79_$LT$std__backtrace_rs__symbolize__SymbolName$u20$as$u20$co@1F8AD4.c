int __fastcall <std::backtrace_rs::symbolize::SymbolName as core::fmt::Display>::fmt(_DWORD *a1, int a2)
{
  unsigned int v3; // r6
  int v4; // r1
  int v5; // r7
  int v6; // r4
  char v7; // r8
  int v8; // r5
  int v9; // r0
  int v11; // [sp+0h] [bp-Ch] BYREF
  int v12; // [sp+4h] [bp-8h]
  int v13; // [sp+8h] [bp-4h]

  if ( *a1 != 2 )
    return <rustc_demangle::Demangle as core::fmt::Display>::fmt();
  v3 = a1[9];
  v4 = 0;
  if ( !v3 )
    return v4;
  v5 = a1[8];
  while ( 1 )
  {
    core::str::converts::from_utf8(&v11, v5);
    if ( !v11 )
      break;
    v6 = BYTE1(v13);
    v7 = v13;
    v8 = v12;
    if ( <str as core::fmt::Display>::fmt(&unk_2A6A81, 3, a2) )
      return 1;
    if ( (v7 & 1) != 0 )
    {
      v9 = v8 + v6;
      if ( v3 < v8 + v6 )
        core::slice::index::slice_start_index_len_fail();
      v3 -= v9;
      v5 += v9;
      if ( v3 )
        continue;
    }
    return 0;
  }
  return <str as core::fmt::Display>::fmt(v12, v13, a2) != 0;
}
