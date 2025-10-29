int __fastcall <core::str::iter::EncodeUtf16 as core::fmt::Debug>::fmt(int a1, int *a2)
{
  int v2; // r4
  int (__fastcall *v3)(int, const char *, int); // r5

  v2 = *a2;
  v3 = *(int (__fastcall **)(int, const char *, int))(a2[1] + 12);
  if ( v3(*a2, aEncodeutf16, 11) )
    return 1;
  else
    return v3(v2, asc_2B63A3, 7);
}
