int __fastcall sub_80264(int a1, _DWORD *a2)
{
  int result; // r0
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  result = get_miner_working_status(v5);
  if ( a1 )
  {
    if ( a2 )
      return sub_800BC(a1, a2, -v5[5]);
  }
  return result;
}
