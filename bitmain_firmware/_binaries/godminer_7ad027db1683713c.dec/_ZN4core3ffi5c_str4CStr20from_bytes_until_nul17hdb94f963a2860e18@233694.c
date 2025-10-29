_BYTE *__fastcall core::ffi::c_str::CStr::from_bytes_until_nul(_BYTE *a1, unsigned int a2)
{
  int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r0
  bool v7; // zf
  unsigned int v8; // r0
  unsigned int v9; // r1

  v4 = 0;
  if ( a2 >= 8 )
  {
    v4 = core::slice::memchr::memchr_aligned(0, (int)a1, a2);
    goto LABEL_27;
  }
  if ( !a2 )
  {
    v5 = 0;
    goto LABEL_27;
  }
  if ( !*a1 )
  {
    v4 = 1;
    v5 = 0;
    goto LABEL_27;
  }
  if ( a2 == 1 )
    goto LABEL_13;
  v5 = 1;
  if ( !a1[1] )
  {
LABEL_26:
    v4 = 1;
    goto LABEL_27;
  }
  if ( a2 == 2 )
  {
LABEL_13:
    v5 = a2;
    goto LABEL_27;
  }
  if ( !a1[2] )
  {
    v5 = 2;
    goto LABEL_26;
  }
  if ( a2 == 3 )
    goto LABEL_13;
  if ( !a1[3] )
  {
    v5 = 3;
    goto LABEL_26;
  }
  if ( a2 == 4 )
    goto LABEL_13;
  if ( !a1[4] )
  {
    v5 = 4;
    goto LABEL_26;
  }
  if ( a2 == 5 )
    goto LABEL_13;
  if ( !a1[5] )
  {
    v5 = 5;
    goto LABEL_26;
  }
  v5 = a2;
  if ( a2 != 6 )
  {
    v6 = (unsigned __int8)a1[6];
    v5 = a2;
    v7 = v6 == 0;
    v8 = __clz(v6);
    if ( v7 )
      v5 = 6;
    v4 = v8 >> 5;
  }
LABEL_27:
  if ( !v4 )
    return 0;
  v9 = v5 + 1;
  if ( v9 > a2 )
    core::slice::index::slice_end_index_len_fail(v9, a2, (int)&off_2CEFA4);
  return a1;
}
