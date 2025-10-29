int __fastcall std::env::args_os(int *a1)
{
  int v2; // r11
  int v3; // r10
  _BOOL4 v4; // r0
  int v5; // r6
  int result; // r0
  int v7; // r1
  size_t *v8; // r8
  int v9; // r6
  int v10; // r4
  const char *v11; // r5
  int v12; // r0
  size_t v13; // r7
  int v14; // [sp+8h] [bp-Ch]
  int v15; // [sp+Ch] [bp-8h]

  v2 = dword_2E9660;
  if ( !dword_2E9660 )
  {
    v7 = 0;
    result = 4;
LABEL_19:
    v3 = 0;
    goto LABEL_21;
  }
  v3 = dword_2E965C;
  if ( dword_2E965C < 1 )
  {
    result = 4;
    v7 = 0;
  }
  else
  {
    v4 = (unsigned int)dword_2E965C < 0xAAAAAAB;
    if ( (unsigned int)dword_2E965C > 0xAAAAAAA || 12 * dword_2E965C < 0 )
      alloc::raw_vec::capacity_overflow();
    v5 = 4 * v4;
    if ( 12 * dword_2E965C )
    {
      result = _rust_alloc(12 * dword_2E965C);
      v7 = v3;
      if ( !result )
LABEL_24:
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      result = 4 * v4;
      v7 = dword_2E965C;
      if ( !v5 )
        goto LABEL_24;
    }
  }
  v15 = result;
  v14 = v7;
  if ( v3 < 1 )
    goto LABEL_19;
  v8 = (size_t *)(result + 8);
  v9 = 0;
  do
  {
    v11 = *(const char **)(v2 + 4 * v9);
    v12 = core::ffi::c_str::CStr::from_ptr::strlen_rt(v11);
    v13 = v12;
    if ( v12 )
    {
      if ( v12 <= -1 )
        alloc::raw_vec::capacity_overflow();
      v10 = _rust_alloc(v12);
      if ( !v10 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v10 = 1;
    }
    ++v9;
    memcpy((void *)v10, v11, v13);
    *(v8 - 2) = v13;
    *(v8 - 1) = v10;
    *v8 = v13;
    v8 += 3;
  }
  while ( v3 != v9 );
  v7 = v14;
  result = v15;
LABEL_21:
  *a1 = v7;
  a1[3] = result;
  a1[1] = result;
  a1[2] = result + 12 * v3;
  return result;
}
