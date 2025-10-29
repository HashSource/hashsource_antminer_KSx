int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_2D4AA4 )
  {
    byte_2D4AA8 = 0;
    byte_2D4AA9 = 0;
    byte_2D4AAA = 0;
    byte_2D4AAB = 0;
    byte_2D4AAC = 0;
    byte_2D4AAD = 0;
    byte_2D4AAF = 0;
    byte_2D4AB0 = 0;
    byte_2D4AA4 = 1;
    byte_2D4AAE = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_2D4AAC;
  v2 = byte_2D4AB0;
  *(_DWORD *)result = *(_DWORD *)&byte_2D4AA8;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
