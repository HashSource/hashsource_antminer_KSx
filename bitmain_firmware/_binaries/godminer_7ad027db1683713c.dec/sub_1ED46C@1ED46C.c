void __fastcall sub_1ED46C(void **a1)
{
  _DWORD *v1; // r6

  v1 = *a1;
  (**((void (__fastcall ***)(_DWORD))*a1 + 26))(*((_DWORD *)*a1 + 25));
  if ( *(_DWORD *)(v1[26] + 4) )
    _rust_dealloc((void *)v1[25]);
  _rust_dealloc(*a1);
}
