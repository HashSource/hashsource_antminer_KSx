int __fastcall std::os::unix::net::ancillary::SocketAncillary::add_creds(int a1, void *src, unsigned int a3)
{
  size_t v5; // r9
  unsigned int *v6; // r4
  unsigned int v7; // r0
  int v9; // r1
  size_t v10; // r2
  unsigned int v11; // r5
  unsigned int v12; // r1
  unsigned int v13; // r2
  bool v14; // cf
  unsigned int *v15; // r0

  v5 = 12 * a3;
  v6 = *(unsigned int **)a1;
  v7 = *(_DWORD *)(a1 + 4);
  *(_BYTE *)(a1 + 12) = 0;
  if ( !is_mul_ok(0xCu, a3) )
    return 0;
  v9 = *(_DWORD *)(a1 + 8);
  v10 = (v5 + 15) & 0xFFFFFFFC;
  v11 = v10 + v9;
  if ( __CFADD__(v10, v9) || v11 > v7 )
    return 0;
  if ( v11 != v9 )
    memset((char *)v6 + v9, 0, v10);
  *(_DWORD *)(a1 + 8) = v11;
  if ( v11 < 0xC )
    return 0;
  v12 = (unsigned int)v6 + v11;
  v13 = *v6;
  do
  {
    v14 = v13 >= 0xC;
    v15 = v6;
    if ( v13 >= 0xC )
    {
      v6 = (unsigned int *)((char *)v6 + ((v13 + 3) & 0xFFFFFFFC));
      v14 = v12 >= (unsigned int)(v6 + 3);
    }
    if ( !v14 )
      break;
    if ( v15 == v6 )
      break;
    v13 = *v6;
  }
  while ( (unsigned int)v6 + ((*v6 + 3) & 0xFFFFFFFC) <= v12 );
  *v15 = v5 + 12;
  v15[1] = 1;
  v15[2] = 2;
  memcpy(v15 + 3, src, v5);
  return 1;
}
