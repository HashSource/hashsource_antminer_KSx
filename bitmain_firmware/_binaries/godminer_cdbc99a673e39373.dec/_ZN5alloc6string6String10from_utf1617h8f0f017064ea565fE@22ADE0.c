void __fastcall alloc::string::String::from_utf16(signed int *a1, unsigned __int16 *a2, signed int size)
{
  int v6; // r0
  unsigned __int16 *v7; // r7
  unsigned __int16 *v8; // r0
  unsigned int v9; // r1
  void *v10; // r1
  signed int v11; // r2
  signed int v12; // r1
  signed int v13; // [sp+0h] [bp-10h] BYREF
  void *ptr; // [sp+4h] [bp-Ch]
  signed int v15; // [sp+8h] [bp-8h]

  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow();
    v6 = _rust_alloc(size);
    if ( !v6 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v6 = 1;
  }
  v7 = &a2[size];
  v13 = size;
  ptr = (void *)v6;
  v15 = 0;
  while ( 1 )
  {
    if ( a2 == v7 )
    {
      v10 = ptr;
      v11 = v15;
      *a1 = v13;
      a1[1] = (signed int)v10;
      a1[2] = v11;
      return;
    }
    v8 = a2 + 1;
    v9 = *a2;
    if ( (v9 & 0xF800) != 0xD800 )
    {
      ++a2;
      goto LABEL_8;
    }
    if ( v9 >> 10 > 0x36 || v8 == v7 || (unsigned __int16)(*v8 + 0x2000) < 0xFC00u )
      break;
    a2 += 2;
LABEL_8:
    sub_22B0B0(&v13);
  }
  v12 = v13;
  a1[1] = 0;
  if ( v12 )
    _rust_dealloc(ptr);
}
