int __fastcall packet_2_nonce_rvn(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  if ( *(_BYTE *)(a2 + 2) != 45 )
    return 10;
  if ( *(_BYTE *)(a1 + 254) )
    return sub_FAC2C(a1, a2, a3, a4, a5, a6, a7);
  return 14;
}
