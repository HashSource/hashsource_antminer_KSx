int __fastcall <std::sys_common::wtf8::Wtf8 as core::fmt::Debug>::fmt(int a1, unsigned int a2, int a3)
{
  int v6; // r7
  char *v7; // r5
  _DWORD *v8; // lr
  char **v9; // r12
  unsigned int v10; // r0
  unsigned int v11; // r7
  char *v12; // r2
  int v13; // r6
  char *v14; // r3
  int v15; // r4
  bool v16; // zf
  unsigned int v17; // r6
  _DWORD *v18; // r4
  char **v19; // r6
  __int16 v21; // [sp+2h] [bp-22h] BYREF
  _DWORD v22[6]; // [sp+4h] [bp-20h] BYREF
  _DWORD v23[2]; // [sp+1Ch] [bp-8h] BYREF

  v6 = 1;
  if ( !<core::fmt::Formatter as core::fmt::Write>::write_str(a3, asc_2A5A3F, 1) )
  {
    v7 = (char *)(a1 + a2);
    v8 = v23;
    v9 = &off_2E020C;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 == a2 )
      {
        v10 = a2;
LABEL_33:
        v6 = 1;
        if ( !sub_1E7374(a3, a1 + v10, a2 - v10) )
          return <core::fmt::Formatter as core::fmt::Write>::write_str(a3, asc_2A5A3F, 1);
        return v6;
      }
      v11 = v10;
      v12 = (char *)(a1 + v10);
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = 1;
          v14 = v12 + 1;
          v15 = *v12;
          if ( v15 <= -1 )
            break;
LABEL_9:
          v12 = v14;
          v11 += v13;
          if ( v14 == v7 )
            goto LABEL_33;
        }
        if ( (unsigned __int8)v15 < 0xE0u )
        {
          v13 = 2;
          if ( v14 != v7 )
            v14 = v12 + 2;
          goto LABEL_9;
        }
        if ( (unsigned __int8)v15 != 237 )
        {
          v13 = 3;
          if ( v14 != v7 )
            v14 = v12 + 2;
          if ( v14 != v7 )
            ++v14;
          if ( (unsigned __int8)v15 >= 0xF0u )
          {
            v13 = 4;
            if ( v14 != v7 )
              ++v14;
          }
          goto LABEL_9;
        }
        v16 = v14 == v7;
        if ( v14 != v7 )
        {
          v14 = v12 + 2;
          v16 = v12 + 2 == v7;
        }
        if ( v16 )
          goto LABEL_33;
        v17 = (unsigned __int8)v12[1];
        if ( v17 >= 0xA0 )
          break;
        v12 += 3;
        v11 += 3;
        if ( v12 == v7 )
          goto LABEL_33;
      }
      v21 = *v14 & 0x3F | ((v17 & 0x1F) << 6) | 0xD800;
      if ( v11 < v10 )
        core::slice::index::slice_index_order_fail();
      if ( v11 > a2 )
        core::slice::index::slice_end_index_len_fail();
      v18 = v8;
      v19 = v9;
      if ( sub_1E7374(a3, a1 + v10, v11 - v10) )
        return 1;
      v22[3] = 2;
      v22[5] = 1;
      v22[0] = 0;
      v23[0] = &v21;
      v22[4] = v18;
      v23[1] = core::fmt::num::<impl core::fmt::LowerHex for i16>::fmt;
      v22[2] = v19;
      if ( core::fmt::Formatter::write_fmt(a3, v22) )
        return 1;
      v10 = v11 + 3;
      v9 = v19;
      v8 = v18;
      if ( v11 + 3 > a2 )
        core::slice::index::slice_start_index_len_fail();
    }
  }
  return v6;
}
