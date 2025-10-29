unsigned int __fastcall std::fs::write::inner(int a1, _BYTE *a2, size_t n, char *a4, int a5)
{
  int v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r7
  char **v11; // r4
  size_t v12; // r2
  unsigned int v13; // r0
  unsigned int result; // r0
  unsigned int v15; // r1
  int v16; // r0
  _DWORD v17[3]; // [sp+0h] [bp-1A8h] BYREF
  __int16 v18; // [sp+Ch] [bp-19Ch]
  unsigned int v19; // [sp+10h] [bp-198h] BYREF
  int fd; // [sp+14h] [bp-194h]
  _BYTE dest[388]; // [sp+18h] [bp-190h] BYREF
  _DWORD v22[3]; // [sp+19Ch] [bp-Ch] BYREF

  v17[1] = 438;
  v17[2] = 16777472;
  v18 = 1;
  v17[0] = 0;
  if ( n >> 7 > 2 )
  {
    sub_7B218(&v19, a2, n, (int)v17);
    if ( (unsigned __int8)v19 != 4 )
      goto LABEL_8;
LABEL_6:
    v8 = fd;
    goto LABEL_9;
  }
  memcpy(dest, a2, n);
  dest[n] = 0;
  core::ffi::c_str::CStr::from_bytes_with_nul(v22, dest, n + 1);
  if ( !v22[0] )
  {
    sub_1EF278(&v19, v22[1], v22[2], v17);
    if ( (unsigned __int8)v19 != 4 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v19 = dword_2EA158;
  fd = (int)&off_2EA14C;
  if ( (unsigned __int8)dword_2EA158 == 4 )
    goto LABEL_6;
LABEL_8:
  v9 = v19;
  v8 = fd;
  if ( (unsigned __int8)v19 != 4 )
  {
    v15 = HIBYTE(v19);
    *(_BYTE *)a1 = v19;
    result = v9 >> 8;
    *(_DWORD *)(a1 + 4) = v8;
    *(_BYTE *)(a1 + 3) = v15;
    *(_WORD *)(a1 + 1) = result;
    return result;
  }
LABEL_9:
  v10 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = v10;
        if ( v10 >= 0x7FFFFFFF )
          v12 = 0x7FFFFFFF;
        v13 = write(v8, a4, v12);
        if ( v13 == -1 )
          break;
        if ( !v13 )
        {
          v16 = 2;
          v11 = &off_2E9C28;
          goto LABEL_23;
        }
        if ( v10 < v13 )
          core::slice::index::slice_start_index_len_fail();
        v10 -= v13;
        a4 += v13;
        if ( !v10 )
          goto LABEL_19;
      }
      v11 = (char **)*_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind((int)v11) != 35 )
        break;
      if ( !v10 )
        goto LABEL_19;
    }
    v16 = 0;
LABEL_23:
    *(_DWORD *)a1 = v16;
    *(_DWORD *)(a1 + 4) = v11;
    return close(v8);
  }
  else
  {
LABEL_19:
    *(_BYTE *)a1 = 4;
    return close(v8);
  }
}
