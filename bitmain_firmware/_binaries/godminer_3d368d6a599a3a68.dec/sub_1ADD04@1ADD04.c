int __fastcall sub_1ADD04(int a1)
{
  if ( *(_BYTE *)a1 == 4 )
    return close(*(_DWORD *)(a1 + 4));
  else
    return sub_1AED2C(a1);
}
