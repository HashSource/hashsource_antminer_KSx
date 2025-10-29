int __fastcall sub_92D84(int a1, int a2)
{
  int v3; // r4

  v3 = *(_DWORD *)(a1 + 20);
  if ( !v3 )
    v3 = sub_92C20(a1, a2);
  if ( (unsigned int)(v3 + 2) > 1 )
    strbuffer_append_byte(a1 + 40, (unsigned __int8)v3);
  return v3;
}
