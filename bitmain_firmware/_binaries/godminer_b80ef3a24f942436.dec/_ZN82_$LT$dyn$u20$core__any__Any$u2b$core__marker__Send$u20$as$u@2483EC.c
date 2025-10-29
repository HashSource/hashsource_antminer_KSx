int __fastcall <dyn core::any::Any+core::marker::Send as core::fmt::Debug>::fmt(int a1, int a2, int *a3)
{
  int v3; // r4
  int (__fastcall *v4)(int, const char *, int); // r5

  v3 = *a3;
  v4 = *(int (__fastcall **)(int, const char *, int))(a3[1] + 12);
  if ( v4(*a3, aAny, 3) )
    return 1;
  else
    return v4(v3, asc_2BF6E3, 7);
}
