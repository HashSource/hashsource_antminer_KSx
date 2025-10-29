void __fastcall sub_1AE784(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
  {
    sub_1AE058((int)v2);
    _rust_dealloc(*a1);
  }
}
