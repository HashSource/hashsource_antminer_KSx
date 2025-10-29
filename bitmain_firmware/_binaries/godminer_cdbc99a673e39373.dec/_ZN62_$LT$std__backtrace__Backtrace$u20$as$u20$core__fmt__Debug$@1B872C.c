int __fastcall <std::backtrace::Backtrace as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  int v3; // r0
  int v6; // r0
  unsigned int v7; // r5
  unsigned int v8; // r6
  int v9; // r9
  int v10; // r7
  _DWORD *v11; // r8
  _DWORD *v12; // r7
  bool v13; // zf
  unsigned int v14; // r0
  int v15; // r9
  _DWORD *v16; // r4
  int *v17[6]; // [sp+8h] [bp-1Ch] BYREF
  unsigned int v18; // [sp+20h] [bp-4h] BYREF

  v3 = *a1;
  if ( !v3 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aUnsupported, 13);
  if ( v3 == 1 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aDisabled_0, 10);
  v6 = a1[1];
  __dmb(0xBu);
  if ( v6 != 4 )
  {
    v17[0] = (int *)&v18;
    v18 = (unsigned int)(a1 + 1);
    sub_7A7D0(a1 + 1, v17);
    v7 = a1[2];
    v8 = a1[5];
    if ( v8 >= v7 )
      goto LABEL_7;
LABEL_22:
    core::slice::index::slice_start_index_len_fail();
  }
  v7 = a1[2];
  v8 = a1[5];
  if ( v8 < v7 )
    goto LABEL_22;
LABEL_7:
  v9 = a1[4];
  v10 = 1;
  v17[4] = (int *)aRustc9eb3afe9e;
  v17[2] = (int *)&off_2CA7E8;
  v17[3] = (int *)1;
  v17[5] = 0;
  v17[0] = 0;
  if ( !core::fmt::Formatter::write_fmt(a2, v17) )
  {
    core::fmt::Formatter::debug_list(v17);
    if ( v7 != v8 )
    {
      v11 = (_DWORD *)(v9 + 28 * v8);
      v12 = (_DWORD *)(v9 + 28 * v7);
      do
      {
        v14 = v12[1];
        if ( !*v12 )
        {
          v18 = 0;
          Unwind_VRS_Get(v14, 0, 15, 0, &v18);
          v14 = v18 & 0xFFFFFFFE;
        }
        v13 = v14 == 0;
        if ( v14 )
        {
          v14 = v12[6];
          v13 = v14 == 0;
        }
        if ( !v13 )
        {
          v15 = 44 * v14;
          v16 = (_DWORD *)v12[5];
          do
          {
            v18 = (unsigned int)v16;
            core::fmt::builders::DebugSet::entry(v17, &v18, &off_2CA180);
            v15 -= 44;
            v16 += 11;
          }
          while ( v15 );
        }
        v12 += 7;
      }
      while ( v12 != v11 );
    }
    return core::fmt::builders::DebugList::finish(v17);
  }
  return v10;
}
