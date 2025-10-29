void __fastcall __noreturn core::panicking::const_panic_fmt(int a1)
{
  int v1; // r1
  const char *v2; // r0
  int v3; // r1

  if ( *(_DWORD *)(a1 + 12) )
  {
    v3 = *(_DWORD *)(a1 + 8);
    v2 = *(const char **)v3;
    v1 = *(_DWORD *)(v3 + 4);
  }
  else
  {
    v1 = 0;
    v2 = aLibraryCoreSrc;
  }
  sub_249F4C((int)v2, v1, (int)&off_2EF0FC);
}
