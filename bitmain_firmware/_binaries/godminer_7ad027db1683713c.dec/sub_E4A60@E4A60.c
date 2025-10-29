int __fastcall sub_E4A60(int a1)
{
  int v2; // r4

  v2 = *(_DWORD *)(a1 + 312);
  sub_E4500(a1, v2);
  if ( v2 == *(_DWORD *)(a1 + 400) )
    return 0;
  else
    return 12;
}
