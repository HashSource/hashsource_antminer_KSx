void __fastcall sub_1B1C10(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
  {
    sub_1B14E4((int)v2);
    _rust_dealloc(*a1);
  }
}
