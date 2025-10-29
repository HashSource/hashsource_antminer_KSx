int std::sys_common::thread::min_stack()
{
  bool v1; // zf
  unsigned __int8 *v2; // r5
  int v3; // r6
  int v4; // r4
  int v5; // r8
  int v6; // [sp+0h] [bp-18h] BYREF
  unsigned __int8 *v7; // [sp+4h] [bp-14h]
  void *ptr; // [sp+8h] [bp-10h]
  void *v9; // [sp+Ch] [bp-Ch]
  _BYTE v10[4]; // [sp+10h] [bp-8h] BYREF
  int v11; // [sp+14h] [bp-4h]

  if ( dword_2E9608 )
    return dword_2E9608 - 1;
  std::env::_var(&v6, aRustMinStack, 0xEu);
  if ( v6 )
  {
    v1 = ptr == 0;
    if ( ptr )
      v1 = v7 == 0;
    if ( !v1 )
      _rust_dealloc(ptr);
  }
  else
  {
    v2 = (unsigned __int8 *)ptr;
    if ( ptr )
    {
      v3 = (int)v7;
      ptr = v9;
      v7 = v2;
      v6 = v3;
      core::num::<impl core::str::traits::FromStr for usize>::from_str((int)v10, v2, (unsigned int)v9);
      v4 = v11;
      v5 = v10[0];
      if ( v3 )
        _rust_dealloc(v2);
      if ( v5 )
        v4 = 0x200000;
      goto LABEL_15;
    }
  }
  v4 = 0x200000;
LABEL_15:
  dword_2E9608 = v4 + 1;
  return v4;
}
