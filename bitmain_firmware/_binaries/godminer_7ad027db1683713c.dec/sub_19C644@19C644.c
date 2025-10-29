void __fastcall sub_19C644(int *a1)
{
  void *v2; // r0
  bool v3; // zf
  int v4; // r0

  v2 = (void *)a1[9];
  v3 = v2 == 0;
  if ( v2 )
    v3 = a1[8] == 0;
  if ( v3 )
  {
    v4 = *a1;
    if ( *a1 == 2 )
      return;
LABEL_6:
    if ( v4 )
    {
      if ( !a1[1] )
        return;
    }
    else if ( !a1[1] )
    {
      return;
    }
    _rust_dealloc((void *)a1[2]);
    return;
  }
  _rust_dealloc(v2);
  v4 = *a1;
  if ( *a1 != 2 )
    goto LABEL_6;
}
