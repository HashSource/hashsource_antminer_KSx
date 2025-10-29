int __fastcall sub_1C48B8(int a1, char *buf, unsigned int a3)
{
  unsigned int v3; // r6
  int v6; // r4
  size_t v7; // r2
  unsigned int v8; // r0
  int v10; // r2
  signed __int64 v11; // kr00_8
  int v12; // r4

  if ( !a3 )
    return 0;
  v3 = a3;
  do
  {
    while ( 1 )
    {
      v7 = v3;
      if ( v3 >= 0x7FFFFFFF )
        v7 = 0x7FFFFFFF;
      v8 = write(2, buf, v7);
      if ( v8 == -1 )
        break;
      if ( !v8 )
      {
        v10 = 2;
        v11 = __PAIR64__((unsigned int)&off_2C9C28 >> 8, (_DWORD)&off_2C9C28 << 24);
        goto LABEL_13;
      }
      if ( v3 < v8 )
        core::slice::index::slice_start_index_len_fail(v8, v3, (int)&off_2C9C18);
      v3 -= v8;
      buf += v8;
      if ( !v3 )
        return 0;
    }
    v6 = *_errno_location();
  }
  while ( (unsigned __int8)std::sys::unix::decode_error_kind(v6) == 35 );
  v11 = (unsigned __int64)(unsigned int)v6 << 24;
  v10 = 0;
LABEL_13:
  v12 = v10 | ((_DWORD)v11 << 8);
  if ( *(_BYTE *)a1 != 4 )
    sub_19C1B8(a1);
  *(_DWORD *)a1 = v12;
  *(_DWORD *)(a1 + 4) = v11 >> 24;
  return 1;
}
