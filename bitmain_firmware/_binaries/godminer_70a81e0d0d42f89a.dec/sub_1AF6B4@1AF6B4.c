int __fastcall sub_1AF6B4(int a1)
{
  if ( *(_BYTE *)a1 == 4 )
    return close(*(_DWORD *)(a1 + 4));
  else
    return sub_1B06DC(a1);
}
