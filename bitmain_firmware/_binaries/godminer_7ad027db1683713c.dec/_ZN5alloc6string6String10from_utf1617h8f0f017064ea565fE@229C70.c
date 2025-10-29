void __fastcall alloc::string::String::from_utf16(signed int *a1, unsigned __int16 *a2, signed int size)
{
  int v6; // r0
  unsigned __int16 *v7; // r7
  unsigned __int16 *v8; // r0
  unsigned int v9; // r1
  unsigned __int16 v10; // r0
  void *v11; // r1
  signed int v12; // r2
  signed int v13; // r1
  signed int v14; // [sp+0h] [bp-10h] BYREF
  void *ptr; // [sp+4h] [bp-Ch]
  signed int v16; // [sp+8h] [bp-8h]

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
  v14 = size;
  ptr = (void *)v6;
  v16 = 0;
  while ( 1 )
  {
    if ( a2 == v7 )
    {
      v11 = ptr;
      v12 = v16;
      *a1 = v14;
      a1[1] = (signed int)v11;
      a1[2] = v12;
      return;
    }
    v8 = a2 + 1;
    v9 = *a2;
    if ( (v9 & 0xF800) != 0xD800 )
    {
      ++a2;
      goto LABEL_8;
    }
    if ( v9 >> 10 > 0x36 )
      break;
    if ( v8 == v7 )
      break;
    v10 = *v8;
    if ( (unsigned __int16)(v10 + 0x2000) < 0xFC00u )
      break;
    a2 += 2;
    v9 = (v10 & 0x3FF | ((v9 & 0x3FF) << 10)) + 0x10000;
LABEL_8:
    sub_229F40((unsigned int *)&v14, v9);
  }
  v13 = v14;
  a1[1] = 0;
  if ( v13 )
    _rust_dealloc(ptr);
}
