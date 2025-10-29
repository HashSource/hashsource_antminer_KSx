int __fastcall sub_81A24(int a1, _DWORD *a2)
{
  int result; // r0
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  result = get_miner_working_status((int)v5);
  if ( a1 )
  {
    if ( a2 )
      return sub_8187C(a1, a2, -v5[5]);
  }
  return result;
}
