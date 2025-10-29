void __fastcall sub_19CD80(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
  {
    sub_19C654((int)v2);
    _rust_dealloc(*a1);
  }
}
