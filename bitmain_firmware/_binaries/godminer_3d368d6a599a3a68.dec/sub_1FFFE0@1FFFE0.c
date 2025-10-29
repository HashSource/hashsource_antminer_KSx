void __fastcall sub_1FFFE0(void **a1)
{
  void **v1; // r6

  v1 = (void **)*a1;
  (**((void (__fastcall ***)(_DWORD))*a1 + 26))(*((_DWORD *)*a1 + 25));
  if ( *((_DWORD *)v1[26] + 1) )
    _rust_dealloc(v1[25]);
  _rust_dealloc(*a1);
}
