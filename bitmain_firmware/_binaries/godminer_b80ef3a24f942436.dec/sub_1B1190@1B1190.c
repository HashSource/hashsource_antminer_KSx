int __fastcall sub_1B1190(int a1)
{
  if ( *(_BYTE *)a1 == 4 )
    return close(*(_DWORD *)(a1 + 4));
  else
    return sub_1B21B8(a1);
}
