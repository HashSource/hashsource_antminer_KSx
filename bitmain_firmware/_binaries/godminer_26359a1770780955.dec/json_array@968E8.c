_QWORD *json_array()
{
  _QWORD *v0; // r4
  void *v1; // r0
  void *v3; // r0

  v0 = jsonp_malloc((void *)0x14);
  if ( v0 )
  {
    v0[1] = 8;
    *(_DWORD *)v0 = 1;
    *((_DWORD *)v0 + 1) = 1;
    v1 = jsonp_malloc((void *)0x20);
    *((_DWORD *)v0 + 4) = v1;
    if ( !v1 )
    {
      v3 = v0;
      v0 = 0;
      jsonp_free(v3);
    }
  }
  return v0;
}
