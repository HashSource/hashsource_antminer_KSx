void __fastcall sub_22FA50(int a1)
{
  void **v1; // r4

  v1 = (void **)((char *)&off_1003C + a1);
  _rust_dealloc(*(_UNKNOWN **)((char *)&off_1003C + a1));
  _rust_dealloc(v1[3]);
  _rust_dealloc(v1[10]);
}
