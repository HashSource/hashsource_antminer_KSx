int __fastcall core::ffi::c_str::CStr::from_bytes_with_nul(_DWORD *a1, _BYTE *a2, unsigned int a3)
{
  int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r0
  bool v9; // zf
  unsigned int v10; // r0

  v6 = 0;
  if ( a3 >= 8 )
  {
    v6 = core::slice::memchr::memchr_aligned(0, (int)a2, a3);
    goto LABEL_27;
  }
  if ( !a3 )
  {
    v7 = 0;
    goto LABEL_27;
  }
  if ( !*a2 )
  {
    v6 = 1;
    v7 = 0;
    goto LABEL_27;
  }
  if ( a3 == 1 )
    goto LABEL_13;
  v7 = 1;
  if ( !a2[1] )
  {
LABEL_26:
    v6 = 1;
    goto LABEL_27;
  }
  if ( a3 == 2 )
  {
LABEL_13:
    v7 = a3;
    goto LABEL_27;
  }
  if ( !a2[2] )
  {
    v7 = 2;
    goto LABEL_26;
  }
  if ( a3 == 3 )
    goto LABEL_13;
  if ( !a2[3] )
  {
    v7 = 3;
    goto LABEL_26;
  }
  if ( a3 == 4 )
    goto LABEL_13;
  if ( !a2[4] )
  {
    v7 = 4;
    goto LABEL_26;
  }
  if ( a3 == 5 )
    goto LABEL_13;
  if ( !a2[5] )
  {
    v7 = 5;
    goto LABEL_26;
  }
  v7 = a3;
  if ( a3 != 6 )
  {
    v8 = (unsigned __int8)a2[6];
    v7 = a3;
    v9 = v8 == 0;
    v10 = __clz(v8);
    if ( v9 )
      v7 = 6;
    v6 = v10 >> 5;
  }
LABEL_27:
  if ( v6 )
  {
    if ( v7 + 1 == a3 )
    {
      a1[1] = a2;
      a1[2] = a3;
      *a1 = 0;
      return 0;
    }
    else
    {
      a1[1] = 0;
      a1[2] = v7;
      *a1 = 1;
      return 1;
    }
  }
  else
  {
    a1[1] = 1;
    *a1 = 1;
    return 1;
  }
}
