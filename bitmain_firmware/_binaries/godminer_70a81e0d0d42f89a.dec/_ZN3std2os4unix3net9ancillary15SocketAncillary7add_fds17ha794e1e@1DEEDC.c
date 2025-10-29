int __fastcall std::os::unix::net::ancillary::SocketAncillary::add_fds(int a1, void *src, unsigned int a3)
{
  unsigned int *v4; // r4
  unsigned int v5; // r0
  size_t v8; // r9
  int v9; // r1
  size_t v10; // r2
  unsigned int v11; // r5
  unsigned int v12; // r1
  unsigned int v13; // r2
  bool v14; // cf
  unsigned int *v15; // r0

  v4 = *(unsigned int **)a1;
  v5 = *(_DWORD *)(a1 + 4);
  *(_BYTE *)(a1 + 12) = 0;
  if ( a3 >> 30 )
    return 0;
  v8 = 4 * a3;
  v9 = *(_DWORD *)(a1 + 8);
  v10 = (4 * a3 + 15) & 0xFFFFFFFC;
  v11 = v10 + v9;
  if ( __CFADD__(v10, v9) || v11 > v5 )
    return 0;
  if ( v11 != v9 )
    memset((char *)v4 + v9, 0, v10);
  *(_DWORD *)(a1 + 8) = v11;
  if ( v11 < 0xC )
    return 0;
  v12 = (unsigned int)v4 + v11;
  v13 = *v4;
  do
  {
    v14 = v13 >= 0xC;
    v15 = v4;
    if ( v13 >= 0xC )
    {
      v4 = (unsigned int *)((char *)v4 + ((v13 + 3) & 0xFFFFFFFC));
      v14 = v12 >= (unsigned int)(v4 + 3);
    }
    if ( !v14 )
      break;
    if ( v15 == v4 )
      break;
    v13 = *v4;
  }
  while ( (unsigned int)v4 + ((*v4 + 3) & 0xFFFFFFFC) <= v12 );
  *v15 = v8 + 12;
  v15[1] = 1;
  v15[2] = 1;
  memcpy(v15 + 3, src, v8);
  return 1;
}
