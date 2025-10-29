void __fastcall sub_1ADED4(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
  {
    sub_1AD7A8((int)v2);
    _rust_dealloc(*a1);
  }
}
