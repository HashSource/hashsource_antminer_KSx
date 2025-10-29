int __fastcall sub_81B94(int a1, _DWORD *a2)
{
  int result; // r0
  _BYTE v5[20]; // [sp+0h] [bp-14h] BYREF

  result = get_miner_working_status(v5);
  if ( a1 )
  {
    if ( a2 )
      return sub_819EC(a1, a2, -v5[5]);
  }
  return result;
}
