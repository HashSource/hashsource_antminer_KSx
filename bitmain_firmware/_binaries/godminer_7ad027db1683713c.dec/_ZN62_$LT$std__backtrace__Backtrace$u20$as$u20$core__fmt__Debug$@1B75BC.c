int __fastcall <std::backtrace::Backtrace as core::fmt::Debug>::fmt(_DWORD *a1, int *a2)
{
  int v5; // r0
  unsigned int v6; // r5
  unsigned int v7; // r6
  int v8; // r9
  int v9; // r7
  _DWORD *v10; // r8
  _DWORD *v11; // r7
  bool v12; // zf
  unsigned int v13; // r0
  int v14; // r9
  _DWORD *v15; // r4
  int *v16[6]; // [sp+8h] [bp-1Ch] BYREF
  unsigned int v17; // [sp+20h] [bp-4h] BYREF

  if ( *a1 <= 1u )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
  v5 = a1[1];
  __dmb(0xBu);
  if ( v5 != 4 )
  {
    v16[0] = (int *)&v17;
    v17 = (unsigned int)(a1 + 1);
    sub_7A6C8(a1 + 1, v16);
    v6 = a1[2];
    v7 = a1[5];
    if ( v7 >= v6 )
      goto LABEL_5;
LABEL_20:
    core::slice::index::slice_start_index_len_fail(v6, v7, (int)&off_2C97D8);
  }
  v6 = a1[2];
  v7 = a1[5];
  if ( v7 < v6 )
    goto LABEL_20;
LABEL_5:
  v8 = a1[4];
  v9 = 1;
  v16[4] = (int *)aRustc9eb3afe9e;
  v16[2] = (int *)&off_2C97E8;
  v16[3] = (int *)1;
  v16[5] = 0;
  v16[0] = 0;
  if ( !core::fmt::Formatter::write_fmt(a2, (int *)v16) )
  {
    core::fmt::Formatter::debug_list((int)v16, a2);
    if ( v6 != v7 )
    {
      v10 = (_DWORD *)(v8 + 28 * v7);
      v11 = (_DWORD *)(v8 + 28 * v6);
      do
      {
        v13 = v11[1];
        if ( !*v11 )
        {
          v17 = 0;
          Unwind_VRS_Get(v13, 0, 15, 0, &v17);
          v13 = v17 & 0xFFFFFFFE;
        }
        v12 = v13 == 0;
        if ( v13 )
        {
          v13 = v11[6];
          v12 = v13 == 0;
        }
        if ( !v12 )
        {
          v14 = 44 * v13;
          v15 = (_DWORD *)v11[5];
          do
          {
            v17 = (unsigned int)v15;
            core::fmt::builders::DebugSet::entry((unsigned __int8 *)v16, (int)&v17, (int)&off_2C9180);
            v14 -= 44;
            v15 += 11;
          }
          while ( v14 );
        }
        v11 += 7;
      }
      while ( v11 != v10 );
    }
    return core::fmt::builders::DebugList::finish((int)v16);
  }
  return v9;
}
