void *__fastcall sub_9655C(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r3
  void *v4; // r7
  unsigned int v6; // r4
  unsigned int v7; // r3
  void *v10; // r0

  v3 = a1[2];
  v4 = (void *)a1[4];
  if ( a2 + a1[3] <= v3 )
    return v4;
  v6 = v3 + a2;
  v7 = 2 * v3;
  if ( v7 >= v6 )
    v6 = v7;
  v10 = jsonp_malloc((void *)(4 * v6));
  if ( !v10 )
    return 0;
  a1[2] = v6;
  a1[4] = v10;
  if ( !a3 )
    return v4;
  memcpy(v10, v4, 4 * a1[3]);
  jsonp_free(v4);
  return (void *)a1[4];
}
