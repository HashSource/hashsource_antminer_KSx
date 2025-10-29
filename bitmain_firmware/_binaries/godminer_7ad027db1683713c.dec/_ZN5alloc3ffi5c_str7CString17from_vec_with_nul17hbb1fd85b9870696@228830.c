int __fastcall alloc::ffi::c_str::CString::from_vec_with_nul(_DWORD *a1, int *a2)
{
  _BYTE *v2; // r2
  unsigned int v3; // r6
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  bool v9; // zf
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r2
  int result; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r3
  int v20[4]; // [sp+0h] [bp-10h] BYREF

  v2 = (_BYTE *)a2[1];
  v3 = a2[2];
  if ( v3 >= 8 )
  {
    v6 = core::slice::memchr::memchr_aligned(0, a2[1], v3);
    goto LABEL_27;
  }
  v6 = 0;
  if ( !v3 )
  {
    v7 = 0;
    goto LABEL_27;
  }
  if ( !*v2 )
  {
    v6 = 1;
    v7 = 0;
    goto LABEL_27;
  }
  if ( v3 == 1 )
    goto LABEL_13;
  v7 = 1;
  if ( !v2[1] )
  {
LABEL_26:
    v6 = 1;
    goto LABEL_27;
  }
  if ( v3 == 2 )
  {
LABEL_13:
    v7 = v3;
    goto LABEL_27;
  }
  if ( !v2[2] )
  {
    v7 = 2;
    goto LABEL_26;
  }
  if ( v3 == 3 )
    goto LABEL_13;
  if ( !v2[3] )
  {
    v7 = 3;
    goto LABEL_26;
  }
  if ( v3 == 4 )
    goto LABEL_13;
  if ( !v2[4] )
  {
    v7 = 4;
    goto LABEL_26;
  }
  if ( v3 == 5 )
    goto LABEL_13;
  if ( !v2[5] )
  {
    v7 = 5;
    goto LABEL_26;
  }
  v7 = v3;
  if ( v3 != 6 )
  {
    v8 = (unsigned __int8)v2[6];
    v7 = v3;
    v9 = v8 == 0;
    v10 = __clz(v8);
    if ( v9 )
      v7 = 6;
    v6 = v10 >> 5;
  }
LABEL_27:
  if ( v6 )
  {
    if ( v7 + 1 == v3 )
    {
      v11 = a2[1];
      v12 = a2[2];
      v20[0] = *a2;
      v20[1] = v11;
      v20[2] = v12;
      result = sub_22A480(v20);
      a1[1] = result;
      a1[2] = v14;
      *a1 = 2;
    }
    else
    {
      result = *a2;
      v18 = a2[1];
      v19 = a2[2];
      *a1 = 0;
      a1[1] = v7;
      a1[2] = result;
      a1[3] = v18;
      a1[4] = v19;
    }
  }
  else
  {
    v15 = *a2;
    v16 = a2[1];
    v17 = a2[2];
    *a1 = 1;
    a1[2] = v15;
    a1[3] = v16;
    a1[4] = v17;
    return 1;
  }
  return result;
}
