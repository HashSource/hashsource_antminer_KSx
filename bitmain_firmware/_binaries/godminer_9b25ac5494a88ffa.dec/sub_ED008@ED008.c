int __fastcall sub_ED008(int a1)
{
  int v2; // r4

  v2 = *(_DWORD *)(a1 + 328);
  sub_ECB04(a1, v2);
  if ( v2 == *(_DWORD *)(a1 + 416) )
    return 0;
  else
    return 12;
}
