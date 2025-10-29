int __fastcall std::fs::File::set_len(_DWORD *a1, int *a2, int a3, int a4)
{
  int v5; // r7
  int v8; // r4
  int result; // r0
  int v10; // [sp+8h] [bp-8h]

  if ( a4 <= -1 )
  {
    LOBYTE(v10) = 20;
    result = _rust_alloc(0xCu);
    if ( !result )
      alloc::alloc::handle_alloc_error();
    a1[1] = result;
    *(_DWORD *)result = 1;
    *(_DWORD *)(result + 4) = &off_2C9F90;
    *(_DWORD *)(result + 8) = v10;
    *a1 = 3;
  }
  else
  {
    v5 = *a2;
    while ( ftruncate64(v5, a2, a3, a4) == -1 )
    {
      v8 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v8) != 35 )
      {
        *a1 = 0;
        a1[1] = v8;
        return 0;
      }
    }
    *(_BYTE *)a1 = 4;
    return 4;
  }
  return result;
}
