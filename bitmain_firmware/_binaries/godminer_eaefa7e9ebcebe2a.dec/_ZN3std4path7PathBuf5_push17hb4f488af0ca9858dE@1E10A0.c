int __fastcall std::path::PathBuf::_push(size_t *a1, _BYTE *src, size_t n)
{
  int v4; // r1
  _BOOL4 v7; // r0
  int v8; // r7

  v4 = a1[2];
  if ( v4 )
  {
    v7 = *(unsigned __int8 *)(v4 + a1[1] - 1) != 47;
    if ( !n )
      goto LABEL_6;
LABEL_5:
    v8 = 0;
    if ( *src == 47 )
      goto LABEL_10;
    goto LABEL_6;
  }
  v7 = 0;
  if ( n )
    goto LABEL_5;
LABEL_6:
  if ( !v7 )
  {
    v8 = v4;
    if ( *a1 - v4 >= n )
      goto LABEL_11;
LABEL_13:
    sub_797F8(a1, v8, n);
    v8 = a1[2];
    goto LABEL_11;
  }
  if ( *a1 == v4 )
  {
    sub_797F8(a1, v4, 1);
    v4 = a1[2];
  }
  v8 = v4 + 1;
  *(_BYTE *)(a1[1] + v4) = 47;
LABEL_10:
  a1[2] = v8;
  if ( *a1 - v8 < n )
    goto LABEL_13;
LABEL_11:
  memcpy((void *)(a1[1] + v8), src, n);
  a1[2] = v8 + n;
  return v8 + n;
}
