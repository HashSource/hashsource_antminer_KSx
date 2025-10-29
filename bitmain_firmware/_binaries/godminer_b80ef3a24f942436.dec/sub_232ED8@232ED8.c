void __fastcall sub_232ED8(int a1)
{
  void **v1; // r4

  v1 = (void **)((char *)&off_1003C + a1);
  _rust_dealloc(*(_UNKNOWN **)((char *)&off_1003C + a1));
  _rust_dealloc(v1[3]);
  _rust_dealloc(v1[10]);
}
