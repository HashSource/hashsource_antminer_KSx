int __fastcall <std::sys_common::wtf8::Wtf8 as core::fmt::Display>::fmt(int a1, unsigned int a2, int a3)
{
  char *v3; // r4
  unsigned int v7; // r0
  unsigned int v8; // r7
  char *v9; // r2
  int v10; // r6
  char *v11; // r3
  int v12; // r5
  bool v13; // zf
  unsigned int v14; // r2

  v3 = (char *)(a1 + a2);
  v7 = 0;
  while ( v7 != a2 )
  {
    v8 = v7;
    v9 = (char *)(a1 + v7);
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = 1;
        v11 = v9 + 1;
        v12 = *v9;
        if ( v12 <= -1 )
          break;
LABEL_8:
        v9 = v11;
        v8 += v10;
        if ( v11 == v3 )
          goto LABEL_32;
      }
      if ( (unsigned __int8)v12 < 0xE0u )
      {
        v10 = 2;
        if ( v11 != v3 )
          v11 = v9 + 2;
        goto LABEL_8;
      }
      if ( (unsigned __int8)v12 != 237 )
      {
        v10 = 3;
        if ( v11 != v3 )
          v11 = v9 + 2;
        if ( v11 != v3 )
          ++v11;
        if ( (unsigned __int8)v12 >= 0xF0u )
        {
          v10 = 4;
          if ( v11 != v3 )
            ++v11;
        }
        goto LABEL_8;
      }
      v13 = v11 == v3;
      if ( v11 != v3 )
        v13 = v9 + 2 == v3;
      if ( v13 )
        goto LABEL_32;
      if ( (unsigned __int8)v9[1] > 0x9Fu )
        break;
      v9 += 3;
      v8 += 3;
      if ( v9 == v3 )
        goto LABEL_32;
    }
    if ( v8 < v7 )
      core::slice::index::slice_index_order_fail();
    if ( v8 > a2 )
      core::slice::index::slice_end_index_len_fail();
    if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a3, a1 + v7, v8 - v7)
      || <core::fmt::Formatter as core::fmt::Write>::write_str(a3, &unk_292681, 3) )
    {
      return 1;
    }
    v7 = v8 + 3;
    if ( v8 + 3 > a2 )
      core::slice::index::slice_start_index_len_fail();
  }
  v7 = a2;
LABEL_32:
  v14 = a2 - v7;
  if ( v7 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a3, a1 + v7, v14);
  else
    return <str as core::fmt::Display>::fmt(a1, v14, a3);
}
