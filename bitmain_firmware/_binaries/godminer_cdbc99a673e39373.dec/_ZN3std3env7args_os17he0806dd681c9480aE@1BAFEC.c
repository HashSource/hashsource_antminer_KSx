int __fastcall std::env::args_os(int *a1)
{
  int v2; // r11
  int v3; // r10
  int v4; // r1
  _BOOL4 v5; // r0
  int v6; // r6
  int result; // r0
  int v8; // r1
  size_t *v9; // r8
  int v10; // r6
  int v11; // r4
  const char *v12; // r5
  int v13; // r0
  int v14; // r1
  size_t v15; // r7
  int v16; // [sp+8h] [bp-Ch]
  int v17; // [sp+Ch] [bp-8h]

  v2 = dword_2EAB58;
  if ( !dword_2EAB58 )
  {
    v8 = 0;
    result = 4;
LABEL_19:
    v3 = 0;
    goto LABEL_21;
  }
  v3 = dword_2EAB54;
  if ( dword_2EAB54 < 1 )
  {
    result = 4;
    v8 = 0;
  }
  else
  {
    v4 = 178956970;
    v5 = (unsigned int)dword_2EAB54 < 0xAAAAAAB;
    if ( (unsigned int)dword_2EAB54 > 0xAAAAAAA || (v4 = 3 * dword_2EAB54, 12 * dword_2EAB54 < 0) )
      alloc::raw_vec::capacity_overflow(v5, v4);
    v6 = 4 * v5;
    if ( 12 * dword_2EAB54 )
    {
      result = _rust_alloc(12 * dword_2EAB54);
      v8 = v3;
      if ( !result )
LABEL_24:
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      result = 4 * v5;
      v8 = dword_2EAB54;
      if ( !v6 )
        goto LABEL_24;
    }
  }
  v17 = result;
  v16 = v8;
  if ( v3 < 1 )
    goto LABEL_19;
  v9 = (size_t *)(result + 8);
  v10 = 0;
  do
  {
    v12 = *(const char **)(v2 + 4 * v10);
    v13 = core::ffi::c_str::CStr::from_ptr::strlen_rt(v12);
    v15 = v13;
    if ( v13 )
    {
      if ( v13 <= -1 )
        alloc::raw_vec::capacity_overflow(v13, v14);
      v11 = _rust_alloc(v13);
      if ( !v11 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v11 = 1;
    }
    ++v10;
    memcpy((void *)v11, v12, v15);
    *(v9 - 2) = v15;
    *(v9 - 1) = v11;
    *v9 = v15;
    v9 += 3;
  }
  while ( v3 != v10 );
  v8 = v16;
  result = v17;
LABEL_21:
  *a1 = v8;
  a1[3] = result;
  a1[1] = result;
  a1[2] = result + 12 * v3;
  return result;
}
